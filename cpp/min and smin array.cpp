#include<stdio.h>
#include<conio.h>
main()
{
int smax,max,i,a[5];
printf("enter the nmbers in arrays");
for(i=0;i<5;i++)
scanf("%d",&a[i]);
max=a[0];
for(i=0;i<5;i++)
{
if(max<a[i])
{
max=a[i];
}
}
printf("the maximum no is %d",max);
smax=a[2];
for(i=0;i<5;i++)
{
if(a[i]!=max)
{
if(a[i]>smax)
smax=a[i];
}
}
printf("\n the second maximum no is %d",smax);
getch();
}
