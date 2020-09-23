#include<stdio.h>
#include<conio.h>
main()
{
	int n,num,c=0,l,d;
	printf("enter the value of n");
	scanf("%d",&n);
	num=n;
	while(num!=0)
	{
		d=num%10;
		l=d;
		if(l>c)
		c=l;
		num=num/10;
	}
	printf("largest digit %d",c);
}
