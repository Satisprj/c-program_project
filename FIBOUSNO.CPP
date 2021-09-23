#include<stdio.h>
#include<conio.h>
int main()
{
	int i=0,num=0,sum=0,n1=0,n2=1;
	printf("Enter your number:");
	scanf("fabious series is %d",&num);
	printf("%d",n1);
	for(i=1;i<=num;i++)
	{
		sum=n1+n2;
		printf(" %d",sum);
		n1=n2;
		n2=sum;
	}
	getch();
}
