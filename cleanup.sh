#!/bin/bash
# Created By: Richard Jackson
# Date: 09-05-2021
#

_execfile=($(find * -exec file {} \; | grep -i "executable" | grep -v "ASCII" | cut -d':' -f1))

file_count(){
	printf ${#_execfile[*]}
}

list(){
	if [ ${#_execfile[*]} -gt 0 ];
	then
		printf "\033[33mCurrent Executable in Repository\033[0m\n"
		for f in `find * -exec file {} \; | grep -i "executable" | grep -v "ASCII" | cut -d':' -f1`;
		do
			printf "${f}\n"
		done
	else
		printf "\033[33mNo executable files were found.\033[0m\n"
	fi
	exit 0
}

controlled(){
	if [ ${#_execfile[*]} -gt 0 ];
	then
		for f in `find * -exec file {} \; | grep -i "executable" | grep -v "ASCII" | cut -d':' -f1`;
		do
			printf "Do you want to remove ${f} [ y(es), n(o) ]:\n"
			read _choice
			case $_choice in
				y|yes) rm -v ${f};;
				n|no) printf "Not removing, ${f}\n";;
			esac
		done
	else
		printf "\033[33mNo executable files were found.\033[0m\n"
	fi
	exit 0
}

force(){
	if [ ${#_execfile[@]} -gt 0 ];
	then
		for f in `find * -exec file {} \; | grep -i "executable" | grep -v "ASCII" | cut -d':' -f1`;
		do
			rm -v ${f}
		done
	else
		printf "\033[33mNo executable files were found.\033[0m\n"
	fi

	exit 0
}

help_menu(){
	printf "\033[36mRepository Cleanup Tool\033[0m\n"
	printf "\033[35mForce Cleanup\t\t\033[32m[ -f, -force, --force ]\033[0m\n"
	printf "\033[35mControlled Cleanup\t\033[32m[ -c, --controlled, -safe, --safe ]\033[0m\n"
	printf "\033[35mList Executables\t\033[32m[ -l, -list, --list ]\033[0m\n"
	printf "\033[35mCount Executables\t\033[32m[ -count, --count, --file-count ]\033[0m\n"
	exit 0
}

for args in $@
do
	case $args in
		-f|-force|--force) _forced=yes;;
		-c|-control|--controlled) _forced=no;;
		-l|-list|--list) list;;
		-count|--count|--file-count) file_count;;
		-h|-help|--help) help_menu;;
	esac
done

case $_forced in
	'yes') force;;
	'no') controlled;;
esac
