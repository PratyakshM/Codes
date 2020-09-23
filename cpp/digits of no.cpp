#include<stdio.h>
#include<conio.h>
main()
{
int n,a,b,c,d,sum=0;
printf("enter the num");
scanf("%d",&n);
a=n/100;
b=n/10;
c=n%10;
d=b%10;
printf(" the digits are %d\t %d\t %d\t %d\t: ",a,b,c,d);
sum=(a*a*a)+(d*d*d)+(c*c*c);
if(sum==n)
printf("armstrong no");
else
printf("not a armstrong no");
getch();
}
