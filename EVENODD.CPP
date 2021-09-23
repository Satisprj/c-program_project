#include<stdio.h>
#include<conio.h>
void main()
{
	int a[30];
	int even=0,odd=0,i=0,count=0;
	clrscr();
	printf("Enter your total number");
	scanf("%d",&count);
	printf("\nEnter the number one by one");
	for(i=0;i<=count-1;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Your even number is:");
	for(i=0;i<=count-1;i++)
	{
		if(a[i]%2==0)
		{
			printf("%d ",a[i]);
			even++;
		}
	}
	printf("\nTotal even number is:%d",even);
	printf("\nYour odd number is:");
	for(i=0;i<=count-1;i++)
	{
		if(a[i]%2!=0)
		{
			printf("%d ",a[i]);
			odd++;
		}
	}
	printf("\nTotal odd number is: %d",odd);
	getch();
}