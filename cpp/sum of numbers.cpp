#include<stdio.h>
#include<conio.h>
main()
{
int n,a,fact=1;
float sum=0.0;
printf("ente rthe range");
scanf("%d",&n);
for(a=1;a<=n;a++)
{
fact=fact*a;
sum=sum+ (float)a/fact;
}
printf("the sum is  %f",sum);
getch();
}
