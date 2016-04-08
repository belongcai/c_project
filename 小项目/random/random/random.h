/*
File: random.h
--------------
this file is a preleminary version of a library which
interface to generate a pseudo number 
*/

#ifndef RANDOM_H 
#define RANDOM_H

/*
Function:randomInteger
Usage: n = randomInteger(int low, int high)
--------------------------
this function returns a random integer from a range
low to high,inclusive
*/
int randomInteger(int low, int high);

/*
Function : randomize
Usage: randomize();
-------------------------
this function generates a random seed to
change the number sequence
*/ 
void randomize(void);
#endif
