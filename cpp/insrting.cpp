#include<stdio.h>
#include<conio.h>
main()
{
int num,pos,n,a[10],i;
printf("enter the length of array");
scanf("%d",&n);
printf("enter the number and position respectively");
scanf("%d%d",&num,&pos);
printf("the array is\n ");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
printf("%d\t",a[i]);
printf("\n the new array is\n ");
for(i=n-1;i>=pos;i--)
{
a[i+1]=a[i];

a[pos]=num;
n=n+1;
}
for(i=0;i<n;i++)
printf("%d\t",a[i]);
getch();
}
