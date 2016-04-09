#include"calendarMonth.h"

int getYearFromUser(void){
	int year;
	printf("which year(>1990) do you wanna print?\n");
	//excellent 
	while(scanf("%d",&year),year < 1990) {
		printf("must greater then 1990\n");
	}

	printf("ok!this is %d year's CALENDAR\n",year);
	return year;
		
}
void giveStructions(void){
	printf("welcome to the CALENDAR-PRINTING\n");	
	
}
void printCalerdar(year){
	int month;
	for(month=1;month<=12;month++){
		printCalendarMonth(month,year);
		printf("\n");
	}
	
}
