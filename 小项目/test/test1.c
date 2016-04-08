#include <stdio.h>
int main(int argc, char *argv[])
{
	randomize();	
	printf("%d",randomInteger(1,6));
	return 0;
}