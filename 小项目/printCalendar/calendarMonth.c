/*
* Function:printCalendarMonth
* prototypes:
	1.isLeapYear
	2.nameOfMonth
	3.daysOfMonth
	4.firstDayOfMonth 
*/
#include"calendarMonth.h"
#include"typeExtension.h"

void printCalendarMonth(int month, int year){
	int days;//how many days of month
	int index;
	int weekday;
	printf("   %s, %d\n",nameOfMonth(month),year);	
	printf(" su mo tu we th fr sa\n")	;
	days = daysOfMonth(month,year);
	weekday = firstDayOfMonth(month,year);
	firstDayBlank(weekday);
	for(index=1;index<=days;index++){
		printf("%3d",index);
		if(weekday == SATURDAY)printf("\n");
		weekday = (weekday+1)%7;				
	}
	if(weekday != SUNDAY) printf("\n");
}


int isLeapYear(int year){
	return (year % 4 == 0 && year % 100 !=0) || (year % 400 == 0); 	
}
int daysOfMonth(int month, int year) {
	//month begins 1
	switch (month){
		case 1 :;case 3 :; case 5 :;case 7 :;case 8 :;case 10:;case 12 : return 31;
		case 2 : if(isLeapYear(year))return 29;return 28;
		default:return 30;
	}		
}
string nameOfMonth(month){
	string nameOfMonth;
	switch(month){
		case 1: nameOfMonth = "JANUARY";break; 
		case 2: nameOfMonth = "FEBRUARY";break;
		case 3: nameOfMonth = "MARCH";break;
		case 4: nameOfMonth = "APRIL";break;
		case 5: nameOfMonth = "MAY";break;
		case 6: nameOfMonth = "JUNE";break;
		
		case 7: nameOfMonth = "JULY";break; 
		case 8: nameOfMonth = "AUGUST";break;
		case 9: nameOfMonth = "SEPTEMBER";break;
		case 10: nameOfMonth = "OCTOBER";break;
		case 11: nameOfMonth = "NOVEMBER";break;
		case 12: nameOfMonth = "DECEMBER";break;
	}
	return nameOfMonth;
	
}
int firstDayOfMonth(int month, int year){
	//1990 1.1 is MONDAY
	//judge year judge month
	int yearIndex,monthIndex;
	int weekday;//weakday beging with 0
	weekday = MONDAY;
	for(yearIndex=1990;yearIndex<year;yearIndex++){
		/*
// need to be simple
		if(isLeapYear(yearIndex))weekday=(weekday+366)%7;
		else{
			weekday = (weekday+365)%7;
		}*/
		//or
		weekday = (weekday+365+isLeapYear(yearIndex))%7;
		
	}
	for(monthIndex=1;monthIndex<month;monthIndex++){
		weekday = (weekday + daysOfMonth(monthIndex,year)) % 7;	
	}
	return weekday;
	
}	
void firstDayBlank(int weekday){
	//print enough blank 
	while(weekday--){
		printf("   ");//3 blank		
	}
}



