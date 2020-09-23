#include<stdio.h>
#include<conio.h>
int prime(int,int);
main()
{
	int n1,n2,p;
	printf("enter number 1 : ");
	scanf("%d",&n1);
	printf("enter no 2 : ");
	scanf("%d",&n2);
	p= prime(n1,n2);
	if(n1-n2==2||n2-n1==2)
	printf("twin prime");
	else
	printf("not");
}
int prime(int n1,int n2)
{
	int c1=0,c2=0,i,f;
	for(i=1;i<=n1;i++)
	{
		if(n1%i==0)
		c1++;
	}
	for(i=1;i<=n2;i++)
	{
		if(n2%i==0)
		c2++;
	}
	if(c1==2 && c2==2)
	f=1;
	return(f);
	}

	
