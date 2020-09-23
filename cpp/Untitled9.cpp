#include<stdio.h>
#include<conio.h>
int prime(int);
main()
{
	int p,num;
	printf("enter the num");
	scanf("%d",&num);
	p=prime(num);
	printf("prime no");
}
int prime(int num)
{
	int c=0,i;
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		c++;
	}
	if(c==2)
	return(num);
}
