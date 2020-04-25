#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	printf("Enter the value of a: ");
	scanf("%d",&a);
	printf("Enter the value of b: ");
	scanf("%d",&b);
	printf("\nThe entered values of a is %d and b is %d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n\nThe new value of a is: %d \nand b is: %d",a,b);
	printf("\n---------------------------------------------------------------------");
	printf("\n\nAll Copyrights Reserved, Pratyaksh Mehrotra, July 2018.");
	getch();

	
}
