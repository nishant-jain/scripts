#!/bin/bash
#script to convert facebook ids to name, id pair
ntail=?fields=name
for line in $(cat new.txt)
do 
curl "https://graph.facebook.com/$line"$ntail
echo
sleep 1
done

