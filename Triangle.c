#include<stdio.h>
main()
{
	int a, b, c, d, e, f;
	printf("Enter the length of 3 segments: ");
	scanf("%d %d %d",&a,&b,&c);
	d=a+b;
	e=b+c;
	f=c+a;
	if(d>c)
	{printf("Triangle is valid");}
	else if(e>a)
	{printf("Triangle is valid");}
	else if(f>b)
	{printf("Triangle is valid");}
	else
	{printf("Triangle is invalid");}
}
