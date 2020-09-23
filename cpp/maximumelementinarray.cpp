#include<stdio.h>
#include<conio.h>
main()
{
	int a[5],i,c=a[0],b=a[0];
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	for(i=0;i<5;i++)
	{
		if(a[i]<c)
		c=a[i];
	}
	printf("the min element is %d\n",c);
for(i=0;i<5;i++)
{
	if(a[i]>b)
	b=a[i];
	}
	printf("the max element is %d",b);
}.6
