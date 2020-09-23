#include<stdio.h>
#include<conio.h>
main()
{
	int a[10],i,n,x,r,j;
	printf("enter the number of elements in the array:-");
	scanf("%d",&n);
	printf("\n enter the value of x \n");
	scanf("%d",&x);
	printf("\n enter the elements\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("\n the array is\n ");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	for(i=0;i<n;i++)
	{
       if(x==a[i])
		{
			printf("\n element found\n");
			printf("\nenter the value u want to replace\n");
			scanf("%d",&r);
			a[i]=r;
		
	
	printf(" \nthe new array is ");
		for(j=0;j<n;j++)
		printf("%d\t",a[j]);
	}
	
}
}
