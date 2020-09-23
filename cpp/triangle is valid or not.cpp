#include<stdio.h>
#include<conio.h>
main()
{
int a,b,c,sum;
printf("enter the angles of a b and c respectively");
scanf("%d%d%d",&a,&b,&c);
sum=a+b+c;
if(sum==180)
printf("triangle is valid");
else
printf("triangle is not valid");
getch();
}

