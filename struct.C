#include<stdio.h>

       struct Student
       {
              int roll; 
              char name[25];
              float marks;
       };

       void main()
       {
              FILE *fp;
              char ch;
      
	      struct Student Stu;

              fp = fopen("student.dat","w+");    

              if(fp == NULL)
              {
                     printf("\nCan't open file or file doesn't exist.");
                     exit(0);
              }
             

	do 
              {
                      printf("\nEnter Roll : ");
                      scanf("%d",&Stu.roll); //2

                      printf("Enter Name : ");
                      scanf("%s",Stu.name);  //shyam

                      printf("Enter Marks : ");
                      scanf("%f",&Stu.marks);  //40

                      fwrite(&Stu,sizeof(Stu),1,fp);

                printf("\nDo you want to add another data (y/n) : ");
                      ch = getche(); //getche() takes one character input;

              }while(ch=='y' || ch=='Y'); 

              printf("\nData written successfully...");

              fclose(fp);
       }