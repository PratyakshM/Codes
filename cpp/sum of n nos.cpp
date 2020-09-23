#include<stdio.h>
#include<conio.h>
int sum(int);
main()
{
int s,n;
s=sum(n);
getch();
}
int sum(int a)
{
int i,s=0,n;
printf("enter the range");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	s=s+i;
}
	printf("sum is %d\n",s);

return a;
}
