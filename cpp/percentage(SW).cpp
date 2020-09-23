#include<stdio.h>
#include<conio.h>
main()
{
int s1,s2,s3,s4;
float per,gt;
printf("enter the numbers");
scanf("%d%d%d%d",&s1,&s2,&s3,&s4);
gt=(s1+s2+s3+s4);
printf("\n the grand total %f",gt);
per=((gt/400.0)*100.0);
printf("\n the percent %f",per);
if(per<=100&&per>=80)
printf("\n 1st DIVISION");
else if(per<=79&&per>=60)
printf("\n 2nd DIVISION");
else
printf("\n 3rd DIVISION");
getch();
}
