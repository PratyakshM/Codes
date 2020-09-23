#include<stdio.h>
#include<conio.h>
main()
{
	int i,n,a[10],b;
	printf("enter the size of the array");
	scanf("%d",& n);
	printf("enter the array");
	
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("enter the array is \n");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	printf("\n enter search");
	scanf("%d",&b);
	for(i=0;i<=n;i++)
	{
	if(b==a[i])
	printf("\n %d is present at %d", a[i], i);
}
	getch();
}
