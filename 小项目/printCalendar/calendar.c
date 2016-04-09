#include <stdio.h>
#include"calendarComponents.h"
void calendar(void)
{
	int year;
	year = getYearFromUser();
	giveStructions();
	printCalerdar(year);
}