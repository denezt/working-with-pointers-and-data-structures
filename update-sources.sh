#!/usr/bin/ksh
# Git Update Wrapper

cleanup="cleanup.sh"

error()
{
	printf "\033[35mError:\033[0m\t${1}\033[0m\n"
	exit 0
}

run_cleanup()
{
	if [ -f "$cleanup" ];
	then
		if [ $(./$cleanup --file-count) -gt 0 ];
		then
			./$cleanup -l
			printf "Remove All Executables? "
			read _choice
			case $_choice in
				y|yes) ./$cleanup -f;;
				n|no) printf "\033[45mExiting, no update was possible...\033[0m\n"
				exit 0
				;;
			esac
		else
			./$cleanup -l
		fi
	else
		error "Missing ${cleanup} script!"
	fi
}

# Amend function will run the 'binary' file
# cleaner.
amend()
{
	branch=$1
	if [ ! -z "$branch" ];
	then
		run_cleanup
		git add -A
		git commit --amend --no-edit
		git push origin $branch --force
	else
		error "Missing valid branch name"
	fi
}

# Normal function will run the 'binary' file
# cleaner and prompt for a message.
normal()
{
	branch=$1
	if [ ! -z "$branch" ];
	then
		run_cleanup
		git add -A
		printf "Add a message: "
		read message
		if [ ${#message} -gt 0 ];
		then
			echo "Saving Message: ${message}"
		else
			message="Simple update - $(date '+%s')"
			echo "Using default message ${message}"
		fi
		git commit -m "${message}"
		git push origin $branch
	else
		error "Missing valid branch name"
	fi
}

help_menu()
{
	printf "\033[36mUpdate Sources -  GIT Wrapper\033[0m\n"
	printf "\033[35mCommit Type\t\033[32m[ --type=COMMIT_TYPE, type:COMMIT_TYPE ]\033[0m\n"
	printf "\033[35mCommit Branch\t\033[32m[ --branch=BRANCH_NAME, branch:BRANCH_NAME ]\033[0m\n"
	printf "\n\033[36mCommit Type:\033[0m\n"
	printf "\033[35mUpdate to commit\033[0m -\t\033[33mnormal, new\033[0m\n"
	printf "\033[35mAmend to commit\033[0m -\t\033[33mamend, update\033[0m\n"
	printf "\n\033[36mUSAGE:\033[0m\n"
	printf "\033[35m$0 \033[32m--type=\033[33mnormal \033[32m--branch=\033[33mfeature/add-new-feature\033[0m\n"
	printf "\033[35m$0 \033[32m--type=\033[33mamend \033[32m--branch=\033[33mfeature/add-new-feature\033[0m\n"
	exit 0
}

for args in $@
do
	case $args in
		--type=*|type:*) _type=$(echo $args | cut -d'=' -f2 | cut -d':' -f2);;
		--branch=*|branch:*) _branch=$(echo $args | cut -d'=' -f2 | cut -d':' -f2);;
		-h|-help|--help) help_menu;;
	esac
done

case $_type in
	normal|new) normal ${_branch};;
	update|amend) amend ${_branch};;
	*) error "Missing or invalid commit 'type' was entered";;
esac
