#!/bin/sh
#script to get the latest xkcd comic. 
wget http://www.xkcd.com
eog ` cat index.html | egrep "Image URL" | awk '{print $5}' `
rm ./index.html


