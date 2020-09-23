#include<stdio.h>
#include<conio.h>
main()
{
int f,num,sum1,sum2=0,sq,a,b,d,c,e;
printf("enter the number");
scanf("%d",&num);
a=num/100;
b=num/10;
c=num%10;
d=b%10;
sum1=((a*a)+(c*c)+(d*d));
printf (" we are looking for %d as a perfect number", sum1);
for(e=1;e<sum1;e++)
{
if(sum1%e==0)
sum2=sum2+e;
}
if(sum1==sum2)
printf("\n perfect no");
else
printf("\n not");
getch();
}
