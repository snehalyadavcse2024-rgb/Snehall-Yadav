//WAP TO CLASSIFY A GIVEN YEAR IS LEAP YEAR OR NOT
#include<stdio.h>
int main()
{
	int year;
	printf("Enter a year:");
	scanf("%d",&year);
	if(year % 4==0 )
	{
		printf("given year is leap year");
	}
	else
	{
		printf("given year is not leap year");
	}
	return 0;
}
