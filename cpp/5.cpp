#include<stdio.h>
#include<conio.h>
main()
{
int a,b,c,sum=0;
printf("enter the three sides");
scanf("%d%d%d",&a,&b,&c);
sum=a+b+c;
if(sum==180)
{
if(a!=b && b=c)
printf("isosceles");
else if(a!=b && b!=c)
printf("scalene");
else
printf("nothing");
}
getch();
}
