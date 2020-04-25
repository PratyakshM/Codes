#include<stdio.h>
main()
{
	int n, i, a[i], count;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	printf("Enter the elements of the array: ");
	for(i=0;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	count=count++;
	if(count>=2)
	{printf("Duplicate");}
	else
	{printf("Not Duplicate");}
}
