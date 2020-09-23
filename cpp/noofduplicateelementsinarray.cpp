#include<stdio.h>
#include<conio.h>
main()
{
	int a[10],i,n,x,c=0;
	printf("enter the number of elements in the array:-");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("enter the value of x \n");
	scanf("%d",&x);
	for(i=0;i<n;i++)
	{
		if(x==a[i])
		c++;
	}
	if(c>1)
	printf("\n duplicate elements present \n");
	printf("\n no of duplicate elements is %d:-",c);
}
