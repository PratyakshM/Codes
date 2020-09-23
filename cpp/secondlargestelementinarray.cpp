#include<stdio.h>
#include<conio.h>
main()
{
	int a[10],i,c=a[0],smax,max,n;
	printf("enter the no of elements in an array \n:-");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	for(i=0;i<n;i++)
	{
		if(a[i]>c)
		max=a[i];
	}
	printf("\n max element is %d\n",max);
	for(i=0;i<n;i++)
	{
		if(a[i]>c)
		{
			if(a[i]!=max)
			smax=a[i];
		}
	}
	printf("\n the second largest element is %d",smax);
}
