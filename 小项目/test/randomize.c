/*
Function:randomize
--------------------------
this function generates a random seed to change number sequence
it depends on the time function
*/
#include<stdlib.h>
#include<time.h>
void randomize(void){
	srand((unsigned)time(NULL));
}