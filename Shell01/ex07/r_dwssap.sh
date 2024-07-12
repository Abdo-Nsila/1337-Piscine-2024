#!/bin/bash
cat /etc/passwd | grep -v '^#' | awk 'NR % 2 == 0' | awk -F: '{ print $1 }' | rev | sort -r | sed -n '7,15p' | tr '\n' ', ' | sed 's/, $/./'
