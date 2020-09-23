#include<stdio.h>
#include<conio.h>
main()
{
	int a[10],i,n,x;
	printf("enter the number of elements in the array:-");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("enter the value of x \n");
	scanf("%d",&x);
	for(i=0;i<n;i++)
	{
		if(x==a[i])
		{
			printf("elemetnt found at %d:-",i);
		}
	}
}
