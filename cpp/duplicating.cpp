#include<stdio.h>
#include<conio.h>
main()
{
int arr[5],i,j;
printf("enter the elements in array");
for(i=0;i<5;i++)
scanf("%d",&arr[i]);
printf("duplicate elements are");
for(i=0;i<5;i++)
{
for(j=i+1;j<5;j++)
{
if(arr[i]==arr[j])
{
printf("%d\t",arr[j]);
}
}
}
getch();
}
