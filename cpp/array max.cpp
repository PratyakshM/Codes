#include<stdio.h>
#include<conio.h>
main()
{
int a[10],i,min;
printf("enter the elements in the array");
for(i=0;i<10;i++)
scanf("%d",&a[i]);
printf("the array is");
for(i=0;i<=9;i++)
printf("%d\t",a[i]);
min=a[0];
for(i=0;i<=9;i++)
{
if(min>a[i])
{
min=a[i];
}
}
printf("\n min element is %d", a[i]);
getch();
}
