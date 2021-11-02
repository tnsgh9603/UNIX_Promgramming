#!/bin/bash
if [[ ! -d .junk ]]
then 
	mkdir ~/.junk
fi

if [[ $1 != [-]* ]]
then
	mv $* ~/.junk

elif [ $1 == '-l' ]
then
	ls -l ~/.junk

elif [ $1 == '-a' ]
then 
	ls -a ~/.junk

elif [ $1 == '-F' ]
then 
	ls -F ~/.junk

elif [ $1 == '-p' ]
then
	rm -r ~/.junk

else
	echo "없는 옵션을 수행함."
fi


