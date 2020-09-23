#include<stdio.h>
#include<conio.h>
main()
{
int i,j,n,term,s=0;
printf("enter the range");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
term=0;
for(j=1;j<=i;j++)
{
term=term+j;
}
s=s+term;
}
printf("%d",s);

getch();
}
