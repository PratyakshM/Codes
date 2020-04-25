#include<stdio.h>
#include<conio.h>
void main()
{
	int v,l,b,h;
	printf("Enter the value of length: ");
	scanf("%d",&l);
	printf("Enter the value of breadth: ");
	scanf("%d",&b);
	printf("Enter the value of height: ");
	scanf("%d",&h);
	v=l*b*h;
	printf("\nThe volume of the cuboid is-  %d",v);
	getch();
}
