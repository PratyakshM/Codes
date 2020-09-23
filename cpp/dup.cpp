#include<stdio.h>
#include<conio.h>
main()
{
int i,a[5];
printf("enter the numbers im array");
for(i=0;i<5;i++)
scanf("%d",&a[i]);
for(i=0; i<5; i++)
if(a[i]==a[i+1])

printf("dup ", a[i]);
getch();
}
