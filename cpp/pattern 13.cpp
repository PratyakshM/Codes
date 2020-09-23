#include<stdio.h>
#include<conio.h>
main()
{
int i,j;
for(i=7;i>=1;i=i-2)
{
for(j=1;j<=i;j++)
{
printf("%d",j);
}
printf("\n");
}
getch();
}
