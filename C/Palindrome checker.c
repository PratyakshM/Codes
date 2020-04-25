#include<stdio.h>
#include<conio.h>
int main ()
{
	int a, rev=0,dig,num;
	printf("\nEnter a number: ");
	scanf("%d",&a);
	num=a;
	while (a>0)
	{
		dig=a%10;
		a=a/10;
		rev=(rev*10)+dig;
	}
	if (rev==num)
	printf("\nIt is a palindrome.");
	else
	printf("\nIt is not a palindrome.");
	getch();
}
	
