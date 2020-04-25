#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	printf("Enter the first number: ");
	scanf("%d",&a);
	printf("Enter the second number: ");
	scanf("%d",&b);
	printf("\nThe entered value of first number is %d and second number is %d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n\nThe interchanged value is %d and b is %d",a,b);
	getch();
}
