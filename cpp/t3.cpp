#include<stdio.h>
#include<conio.h>
main()
{
int i,j,k=0;
for(i=1;i<=5;i++)
{
for(j=1;j<=i;j=j+2)
{
printf("%d",j);
}
printf("\n");
}
getch();
}
