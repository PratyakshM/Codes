#include<stdio.h>
#include<conio.h>
main()
{
int n,i=1, sum=0;
printf("enter the range");
scanf("%d",&n);
while(i<=n)
{
	sum = sum +i;
	i=i+3;
}
printf("the sum is %d", sum);
getch();
}
