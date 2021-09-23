#include<stdio.h>
#include<conio.h>
void main()
{
	int i,k,j;
	clrscr();
	for(i=1;i<=5;i++)
	{
		for(k=1;k<=i;k++)
		{
			printf(" ");
		}
		for(j=i;j<=5;j++)
		{
			printf(" %d",i);
		}
		printf("\n");
	}
	getch();
}
