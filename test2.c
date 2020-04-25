#include<stdio.h>
main()
{
	int n, i, a[i], max;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	printf("Enter the elements of the array: ");
	for(i=0;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=0;i<=n;i++)
	{
		if(max>=a[i])
		{
			max=a[i];
		}
	}
}
