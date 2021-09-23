#include<stdio.h>
#include<conio.h>
void main()
{
	int a[30];
	int i=0,j=0,count=0,temp=0;
	clrscr();
	flag:
	printf("Enter how many number you want to check");
	scanf("%d",&count);
	if(count>30)
	{
		printf("Please check again and, ");
		goto flag;
	}
	printf("Enter your number");
	for(i=0;i<=count-1;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=count-1;i++)
	{
		for(j=1+i;j<=count;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<=count-1;i++)
	{
		printf("%d ",a[i]);
	}
	getch();
}