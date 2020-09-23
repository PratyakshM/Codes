#include<stdio.h>
#include<conio.h>
main()
{
int f=1,num,a;
printf("enter the num");
scanf("%d",&num);
for(a=1;a<=num;a++)
f=f*a;
printf("the factorial is = %d",f);
getch();
}

