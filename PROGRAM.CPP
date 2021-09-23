#include<stdio.h>
#include<conio.h>
void main()
{
	int sum,sub,div,product,a,b,ch;
	clrscr();
	printf("\n\n\n\n\t\t\t\t\t MENU");
	printf("\n\t\t\t\t *******************");
	printf("\n\t\t\t\t 1) Sum");
	printf("\n\t\t\t\t 2) sub");
	printf("\n\t\t\t\t 3) Div");
	printf("\n\t\t\t\t 4) product");
	printf("\n\t\t\t\t Enter two number");
	scanf("%d%d",&a,&b);
	printf("\n\t\t\t\t Enter your choice");
	scanf("%d",&ch);
	if(ch==1)
	{
		sum=a+b;
		printf("\n\t\t\t\t The sum of two num is %d",sum);
	}
	else if(ch==2)
	{
		sub=a-b;
		printf("\n\t\t\t\t The subtrace of two num is %d",sub);
	}
	else if(ch==3)
	{
		div=a/b;
		printf("\n\t\t\t\t Divide of your num is %d",div);
	}
	else if(ch==4)
	{
		product=a*b;
		printf("\n\t\t\t\t Product of your num is %d",product);
	}
	else
	{
		printf("\n\t\t\tError please check again and Try entering No from 1 to 4");
	}
	getch();
}