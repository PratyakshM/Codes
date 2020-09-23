#include<stdio.h>
#include<conio.h>
main()
{
int num,sum=0,a,b,c;
printf("enter the number");
scanf("%d",&num);
a=num%10;
b=num/10;
c=num%100;
while(num!=0)
{
sum=((a*a*a)+(b*b*b)+(c*c*c));
}
if(sum==num)
printf("armstrong no");
else
printf("not a armstrong no");
getch();
}
