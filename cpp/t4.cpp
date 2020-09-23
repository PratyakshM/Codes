#include<stdio.h>
#include<conio.h>
main()
{
int num=1,n,pro;
printf("enter the range");
scanf("%d",&n);
while(num<=n)
{
	pro=num*10;
	printf("10 * %d =%d\n",num,pro);
	num++;
}
getch();
}
