#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	printf("Enter the 1st number: ");
	scanf("%d",&a);
	printf("Enter the 2nd number: ");
	scanf("%d",&b);
	printf("Enter the 3rd number: ");
	scanf("%d",&c);
	
	if(a>=b && a>=c)
	printf("The largest number is 1st number i.e. %d",a);
	
	else if(b>=a && b>=c)
	printf("The largest number 2nd number i.e. %d",b);
	
	else if(c>=a && c>=b)
	printf("The largest number is 3rd number i.e. %d",c);
	getch();
}
