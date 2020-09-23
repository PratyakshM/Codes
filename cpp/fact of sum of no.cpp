#include<stdio.h>
#include<conio.h>
main()
{
int a,n,fact=1;
float sum=0.0;
printf("enter the range");
scanf("%d",&n);
for(a=1;a<=n;a++)
{
fact=fact*a;
sum=sum+(a*a)/(float)(a*fact);
}
printf("the sum is  %f",sum);
getch();
}
