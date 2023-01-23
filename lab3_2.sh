#!/bin/bash

files_count=$(find $location -type f | wc -l)
subdirs_count=$(find $location -type d | wc -l)
echo "The number of subdirectories: $subdirs_count"
echo "The number of regular files : $files_count"
