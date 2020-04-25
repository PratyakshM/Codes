#include<stdio.h>
int main()
{
	int a, b, c, d, e, f, g, h, add, substract, multiply, divide, remainder, quotient, product;
	printf("DO NOT INCLUDE \nTHE ARITHMETICAL SIGNS!");
	printf("\n\nEnter the numbers to be ADDED, seperated, by space: ");
	scanf("%d %d", &a, &b);
	printf("Enter the numbers to be SUBSTRACTED, seperated by space: ");
	scanf("%d %d",&c,&d);
	printf("Enter the numbers to be MULTIPLIED, seperated by space: ");
	scanf("%d %d",&e,&f);
	printf("Enter the number and DIVIDED, seperated by space: ");
	scanf("%d %d",&g,&h);
	add=a+b;
	substract=c-d;
	product=e*f;
	divide=g/h;
	printf("----------------------RESULTS----------------------");
	printf("\n\nThe Addition of %d and %d is: %d",a,b,add);
	printf("\n\nThe Substraction of %d and %d is: %d",c,d,substract);
	printf("\n\nThe Product of %d and %d is: %d",e,f,product);
	printf("\n\nThe Quotient of %d and %d is: %d",g,h,divide);
	return 0;
	
}
