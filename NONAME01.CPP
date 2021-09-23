#include<stdio.h>
#include<conio.h>
void main()
{
	int marks;
	clrscr();
	printf("\n\n\t\tEnter your marks");
	scanf("%d",&marks);
	if(marks>=0 && marks<32)
	{
		printf("\n\t\t\tFail");
	}
	else if(marks>=32 && marks<40)
	{
		printf("\n\t\t\tD+");
	}
	else if(marks>=40 && marks<50)
	{
		printf("\n\t\t\tC");
	}
	else if(marks>=50 && marks<60)
	{
		printf("\n\t\t\tC+");
	}
	else if(marks>=60 && marks<70)
	{
		printf("\n\t\t\tB");
	}
	else if(marks>=70 && marks<80)
	{
		printf("\n\t\t\tB+");
	}
	else if(marks>=80 && marks<90)
	{
		printf("\n\t\t\tA");
	}
	else
	{
		printf("\n\t\t\tA+");
	}
	getch();
}