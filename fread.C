#include<stdio.h>

       struct Student
       {
	      int roll;
	      char name[25];
	      int marks;
       };

       void main()
       {
	      FILE *fp;
	      char ch;
	      int i=0;
	      struct Student stu[3],test[3]; // structure's variable.
	      clrscr();
	      fp = fopen("C:\\TURBOC3\\student.dat","w+"); //Statement   1

	      if(fp == NULL)
	      {
		     printf("\nCan't open file or file doesn't exist.");
		     exit(0);
	      }

	      for(i=0;i<3;i++)
	      {
			printf("\nEnter roll");
			scanf("%d",&stu[i].roll);
			fflush(stdin);
			printf("\n Enter name");
			scanf("%s",stu[i].name);
			fflush(stdin);
			printf("\nEnter marks");
			scanf("%d",&stu[i].marks);
			fflush(stdin);
	      }
	      fwrite(&stu,sizeof(stu),1,fp);
	      fclose(fp);
	      fp = fopen("C:\\TURBOC3\\student.dat","r"); //Statement   1

	      if(fp == NULL)
	      {
		     printf("\nCan't open file or file doesn't exist.");
		     exit(0);
	      }
	      fread(&test,sizeof(test),1,fp);
	      printf("\n The structures in the file were:\n");
	      for(i=0;i<3;i++)
	      {

	      printf ("\n %d \t%s \t%d",test[i].id,test[i].name,test[i].marks);
               
	      }