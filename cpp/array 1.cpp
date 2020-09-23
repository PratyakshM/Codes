#include<stdio.h>
#include<conio.h>
main()
{
int a[10],i;
printf("enter the elements in the array");
for(i=0;i<10;i++)
scanf("%d",&a[i]);
printf("the array is \n");
for(i=0;i<10;i++)
printf("%d\t",a[i]);
printf("\n the reverse  array is \n");
for(i=9;i>=0;i--)
printf("%d\t",a[i]);

getch();
}
