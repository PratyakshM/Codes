#include<stdio.h>
#include<conio.h>
void main()
{
	int p,r,t,i,a;
	printf("Enter the Principal (in Rs.): ");
	scanf("%d",&p);
	printf("Enter the Rate (in percent): ");
	scanf("%d",&r);
	printf("Enter the Time (in years): ");
	scanf("%d",&t);
	i=(p*r*t)/100;
	printf("The calculated simple interest of the given data is Rs.%d",i);
	a=i+p;
	printf("\nThe amount of money to be returned is Rs.%d",a);
	getch();
	
}
