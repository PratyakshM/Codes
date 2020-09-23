#include<stdio.h>
#include<conio.h>
main()
{
	int a[5],i,n,x;
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	printf("\n enter the no you want to search \n");
	scanf("%d",&n);
	printf("\n enter the no you want to replace \n");
	scanf("%d",&x);
	for(i=0;i<5;i++)
	{
	if(n==a[i])
	a[i]=x;
	}
	for(i=0;i<5;i++)
	printf("%d\t",a[i]);
}

