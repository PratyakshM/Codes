#include<stdio.h>
#include<conio.h>
main()
{
int pos,n,a[10],i;
printf("enter the length of array");
scanf("%d",&n);
printf("enter the position");
scanf("%d",&pos);
printf("the array is\n ");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
printf("%d\t",a[i]);
printf("\n the new array is \n");
for(i=pos;i<n-1;i++)
{
a[i]=a[i+1];
n--;
}
for(i=0;i<n;i++)
printf("%d\t",a[i]);
getch();
}

