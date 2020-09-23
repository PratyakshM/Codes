#include<stdio.h>
#include<conio.h>
int large(int);
main()
{
	int n,l;
	printf("enter the value of n");
	scanf("%d",&n);
	l=large(n);
	printf("largest digit %d",l);
}
int large(int n)
{
	int d,i,c=0,a;
	i=n;
	while(i!=0)
	{
		d=i%10;
		a=d;
		if(a>c)
		c=a;
		i=i/10;
	}
	return(c);
}
