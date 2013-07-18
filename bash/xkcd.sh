#!/bin/sh
#script to get the latest xkcd comic. Worked in ubuntu 10.(I guess.) 
wget http://www.xkcd.com
sleep 5
b=`cat index.html | egrep "png</h3>" | awk '{print $5}' | awk -F '<' '{print $1}'`
wget $b
c=`cat index.html | egrep "png</h3>" | awk '{print $5}' | awk -F '<' '{print $1}' | awk -F '/' '{print $5}'`
eog $c
rm ./index.html
rm $c

