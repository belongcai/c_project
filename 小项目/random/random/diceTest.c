/*
File £ºdicetest.c
Usage: simulates the rolling dice  
*/

#include <stdio.h>
#include"random.h"

/*
Constant:
------------
NTrial --- number of trials
*/
#define NTrail 10

/*
* Function prototype
*/
 
int rollDie(void);

int main(int argc, char *argv[])
{
	int i ;
	randomize();
	//some number is repeated first
	for(i=0;i<NTrail;i++){
		printf("%-5d",rollDie());
	}	
	return 0;
}
int rollDie(void){
	return (randomInteger(1,6));
}
