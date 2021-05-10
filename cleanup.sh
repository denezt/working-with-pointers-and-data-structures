#!/bin/bash

for f in `find * -exec file {} \; | grep -i "exec" | grep -v "ASCII" | cut -d':' -f1`;
do
	printf "Do you want to remove ${f} [ yes, no ]:\n"
	read _choice
	case $_choice in
		yes) rm -v ${f};;
		no) printf "Not removing, ${f}\n";;
	esac
done
