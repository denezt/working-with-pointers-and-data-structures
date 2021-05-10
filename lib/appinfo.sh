#!/usr/bin/ksh
#
#

applicationInfo()
{
  eval _appname="$1"
  eval _version="$2"
  eval _date="$3"
  printf "\033[35mAppname\t\033[33m=> \033[32m${_appname}\033[0m\n"
  printf "\033[35mVersion\t\033[33m=> \033[32m${_version}\033[0m\n"
  printf "\033[35mDate\t\033[33m=> \033[32m${_date}\033[0m\n"
}

_appname="Application Name: C Pointers and Data Structures"
_version="v1.0.1a"
_date="11.05.2021"
applicationInfo "\${_appname}" "\${_version}" "\${_date}"

exit 0
