#include<stdio.h>
#include<conio.h>
main()
{
	float i,j,n,sum=0,fact=1;
	printf("enter the limit");
	scanf("%f",&n);
	for(i=1;i<=n;i++)
	{
	for(j=1;j<=i;j++)
	{
	
	fact=fact*j;
}
	sum=sum+i/fact;
	fact=1;
}
	printf("the factorial is %f is %f",n,sum);
getch();
}
