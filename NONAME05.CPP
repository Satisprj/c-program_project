#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y,first,second,third,fourth;
	clrscr();
	printf("enter your number");
	scanf("%d%d",&x,&y);
	if(x>0 && y>0)
	{
		printf("It lies in first quartile");
	}
	else if(x<0 && y>0)
	{
		printf("Its lies in second quartile");
	}
	else if(x<0 && y<0)
	{
		printf("Its lies in third quartile");
	}
	else
	{
		printf("Its lies in fourth quratile");
	}
	getch();
}
