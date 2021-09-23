#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
	int gd = DETECT,gm;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	rectangle(200,200,400,300);
	line(150,250,200,200);
	line(200,300,150,250);
	line(400,300,450,250);
	line(450,250,400,200);
	getch();
	closegraph();
	return 0;

}