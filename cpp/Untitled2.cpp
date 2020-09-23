#include<stdio.h>
#include<conio.h>
main()
{
int n,sum=0;
float avg;
for(n=20;n<=30;n++)
{
sum=sum+n;
avg=sum/10.0;
}
printf("%f",avg);
getch();
}
