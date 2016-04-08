/*
File: random.c
----------------
this file inplements the preleminary interface of random.h
*/

#include<stdio.h>
#include<stdlib.h>

#include"random.h"


/*
Function: randomInteger.c
--------------------------
this function generates integer from[low,high]
following steps 
1) generate a real number from 0 to 1
2) scale it to approciate range size
3) truncate it to int
4) translate it to the start point  
*/
int randomInteger(int low, int high){
	double zero2one = (double) rand()/(	(double)(RAND_MAX+1) );
	int range = (int)(zero2one * (high - low + 1));
	return (range + low);
}

