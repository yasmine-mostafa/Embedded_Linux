#!/bin/bash

#if no backupfolder is created then create one
if [ ! -d ./backups ]; then
	mkdir ./backups
fi


#date to use in the compressed folder name
current_date=$(date +"%d-%m-%Y")

#check if the user has entered inputs 
if [ ! $# -eq 0 ]; then

	#for loop on the input directories
	for dir in "$@"; do
	        
		#check if the directory exists
		if [ -d "$dir" ]; then
		
			#to get the last directory in a path
		        last_dir=$(basename  "$dir")
			
			tar -czf "./backups/backup_<${last_dir}>_<${current_date}>.tar.gz" "$dir"
			echo "Backups of $dir created"
		else
			echo "Directory $dir does not exist"
		fi
	done
else
	echo "Please enter at least one directory"
fi 
