#include<stdio.h>
#include<conio.h>
void main()
{
	char r;
	int x,y,sum,sub,multi,div;
	clrscr();
	printf("a)sum \nb)sub\nc)multi\nd)div\nEnter two number:");
	scanf("%d%d",&x,&y);
	printf("\nEnter your choice");
	scanf("%c",&r);

	switch(r)
	{
	case 'a' :
		sum=x+y;
		printf("\n Result of your sum is %d",sum);
		break;
	case 'b' :
		sub=x-y;
		printf("\n Result of your sub is %d",sub);
		break;
	case 'c' :
		multi=x*y;
		printf("\n Result of your multi is %d",multi);
		break;
	case 'd' :
		div=x/y;
		printf("\n Result of your div is %d",div);
		break;
	}
	getch();
}