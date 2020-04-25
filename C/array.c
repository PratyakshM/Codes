
#include<stdio.h>
main()
{
	int n, i, A[i], x, a;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	printf("Enter the elements of the array: ");
	for(i=0;i<=n;i++)
	{
		scanf("%d",&A[i]);
	}
	printf("The elements of the array are");
	for(i=0;i<=n;i++)
	{
		printf("%d\t",A[i]);
	}
}
