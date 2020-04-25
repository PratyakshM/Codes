#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	printf("Enter the value of a: ");
	scanf("%d",&a);
	printf("Enter the value of b: ");
	scanf("%d",&b);
	if(a==b)
	printf("Values are equal");
	else if(a>b)
	printf("%d is greater",a);
	else
	printf("%d is greater",b);
	getch();
	
}
