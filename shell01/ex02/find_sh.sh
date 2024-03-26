#!/bin/sh
find . -type f -exec basename {} \; | grep .sh$ | sed 's/.sh$//g'
