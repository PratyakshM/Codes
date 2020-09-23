#include<stdio.h>
#include<conio.h>
main()
{
int n,i,pro;
printf("enter the range");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
pro=20*i;
printf("20 * %d =  %d\n",i,pro);
}
getch();
}
