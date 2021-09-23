#include<stdio.h>
#include<conio.h>
void main()
{
	int i=0,sum=0,num;
	clrscr();
	printf("Enter the number:");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		printf("%d ",i);
		sum=sum+i;
	}
	printf("  is the natural number of %d",num);
	printf("\n The sum of your number is %d",sum);
	getch();
}