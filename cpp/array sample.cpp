#include<stdio.h>
#include<conio.h>
main()
{
float avg;
int i,sum=0;
int marks[5];
for(i=0;i<=4;i++)
{
printf("enter the marks");
scanf("%d",&marks[i]);
}
for(i=0;i<=4;i++)
sum=sum+marks[i];
avg=sum/5;
printf("avg marks=%f\n",avg);
getch();
}

