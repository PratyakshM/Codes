#include<stdio.h>
#include<conio.h>
main()
{
int num,pos,n,a[10],i;
printf("enter the length of array");
scanf("%d",&n);
printf("enter the number and position respectively");
scanf("%d%d",&num,&pos);
printf("the array is");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("the new array is");
for(i=n-1;i>=pos;i++)
{
a[i+1]=a[i];
}
a[pos]=num;
n=n+1;
getch();
}
