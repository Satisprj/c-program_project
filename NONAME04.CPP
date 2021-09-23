
#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y,sum,sub,multi,div;
	char r;
	printf("1)sum\n2)sub\n3)multi\n4)div\nEnter two number");
	scanf("%d%d",&x,&y);
	printf("\nEnter your choice");
	scanf("%c",r);

	switch(r)
	{
		case 'a':
			sum=x+y;
			printf("Result sum is %d",sum);
		break;
	}
	getch();
}
