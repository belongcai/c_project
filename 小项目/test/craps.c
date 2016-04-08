#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"genlib.h"
#include"random.h"
/*
	function prototype
	------------------
	playCrapsGame
	rollTwoDice
	giveInstructions
	getYesOrNo 
*/
void giveStructions(void);
void playCrapsGame(void);
int rollTwoDice(void);
int getYesOrNo(string str);
 
int main(int argc, char *argv[])
{
	randomize();
	puts("welcome to the CRAPS game!let's go");
	if(getYesOrNo("need instructions?y/n\n")){
		giveStructions();
	}	
	while(1){
		playCrapsGame();
		if(!getYesOrNo("gonna play game again?y/n"))break;
	}
	return 0;
}

int getYesOrNo(string str){
	char answer;
	printf("%s",str);
	while(1){
		//puts(str);		
		answer=getchar();
		/*
if(answer == "yes"| answer == 'y' | answer == "YES" | answer == 'Y') return 1;
		if(answer == "no" | answer == 'n' | answer == "NO" | answer == 'N') return 0;	*/
		if(answer == 'y'|answer == 'Y') return 1;
		if(answer == 'n'|answer == 'N') return 0;
	}
	 
} 
void giveStructions(void){
	printf("*******instructions*********\n");
	printf("game starts by a pair of dice\n");
	printf("when rolling bengins\nstarin at the total number\n");
	printf("if total equals '2,7,11' it's called 'natural',and \n ");
	printf("you win\n");
	printf("if total equals '3,6,12' it's called 'crapping out',and \n ");
	printf("you lose\n");
	printf("if total equals other number and the number is \n your 'number' \n you still have to roll down\n");
	printf("the dice,if your total equals the point\n");
	printf("you win\n");
	printf("else if you roll the '7' number you lose\n");
	printf("********end******************\n");
}
int rollTwoDice(void){
	int d1,d2;
	puts("press the enter to roll the dice");
	getch();
	d1 = randomInteger(1,6);	
	d2 = randomInteger(1,6);
	printf("%d + %d = %d\nend...\n",d1,d2,d1+d2); 
	printf("you get the %d dice\n",d1+d2);
	return d1+d2;
}
void playCrapsGame(void){
	int point,total;
	total = rollTwoDice();
	if(total == 2 | total == 7 | total == 11){
		puts("you win\n");
	}
	else if(total == 3 | total == 6 | total == 9){
		puts("you lose\n");
	}
	else{
		point = total;
		printf("now the point is %d\n",total);
		while(1){
			total = rollTwoDice();
			if(total == point){
				puts("you win\n");
				break;
			}else{
				if(total == 7) {
					puts("you lose\n");
					break;
				}
			}
		}
	}		
}
