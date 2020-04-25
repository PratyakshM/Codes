#include<stdio.h>
main()
{
	int n, i, a[i], x;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	printf("Enter the elements of the array: ");
	for(i=0;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nEnter the element you want to search: ");
	scanf("%d",&x);
	for(i=0;i<=n;i++)
	{
		if(a[i]==x)
		{
			printf("\nElement %d is present at %d",x,a[i]);
		}
	}
}
