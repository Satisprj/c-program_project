#include<stdio.h>
#include<conio.h>
int main()
{
	int num=0,sum=0,i=0;
	printf("Enter your number");
	scanf("%d",&num);
	for(i=2;i<num;i++)
	{
		if(num%i==0)
		{
			sum++;
			break;
		}
	}
	if(sum==1)
	{
		printf("NOt prime");
	}
	else
	{
		printf("Is prime");
	}
	getch();
}
