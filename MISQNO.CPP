#include<stdio.h>
#include<conio.h>
int main()
{
	int i=0,sum=0,num;
	printf("Entr the number:");
	scanf("%d",num);
	for(i=1;i<=num;i++)
	{
		if(i%2==0)
		{
			printf("%d",i);
			sum=sum+i;
		}
	}
	printf(" sum of even number is %d",sum);
	getch();
}
