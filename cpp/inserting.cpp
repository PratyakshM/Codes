#include<stdio.h>
#include<conio.h>
main()
{
int n,a[5],i;
printf("the lenth of the array will be?");
scanf("%d", &n);
printf("enter the elements is array");
for(i=0;i<=n;i++)
scanf("%d", &a[i]);
printf(" the array is");
for(i=0;i<=n;i++)
printf("%d\t", a[i]);

printf("\n the inserting element is");
for(i=n-1;i<=0;i--)
{
a[i+1]=a[i];
}
printf("\n enter the first element");
scanf("%d",&a[0]);
printf("the new array is  ");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
getch();
}

