#include<stdio.h>
#include<conio.h>
main()
{
int n,a,fact=1,sum=0;
printf("enter the range");
scanf("%d",&n);
for(a=1;a<=n;a++)
{
fact=fact*a;
sum=sum+fact;
}
printf("the sum is  %d",sum);
getch();
}
