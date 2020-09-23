#include<stdio.h>
#include<conio.h>
main()
{
	int a[10],n,i,s=0;
	printf("enter the number of elements in the array:-");
	scanf("%d",&n);;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		s=s+a[i];
	}
	printf("the sum is %d",s);
}
