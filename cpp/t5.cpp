#include<stdio.h>
#include<conio.h>
main()
{
int num,digit,a,sum=0,n;
printf("enter the no");
scanf("%d",&num);
n=num;
while(n>0)
{
digit=n%10;
a=digit*digit*digit;
sum=sum+a;
n=n/10;
}
if(sum==num)
printf("armstrong no");
else
printf("not");
getch();
}
