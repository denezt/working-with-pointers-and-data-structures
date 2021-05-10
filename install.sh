#!/bin/bash

_app=( 'ksh' 'make' 'gcc' )

apt update
for dep in ${_app[@]}
do
	apt -y install $dep
done
