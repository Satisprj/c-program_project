#include<stdio.h>
#include<conio.h>
void main()
{
	int year;
	clrscr();
	printf("Enter the year you want to check");
	scanf("%d",&year);
	if(year%4==0)
	{
		printf("its leap year");
	}
	else if(year%100==0)
	{
		printf("Its not a leap year");
	}
	else if(year%400==0)
	{
		printf("Its A leap year");
	}
	else
	{
		printf("Its not a leap year");
	}
	getch();
}