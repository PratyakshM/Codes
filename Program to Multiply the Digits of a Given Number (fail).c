#include<stdio.h>
#include<conio.h>
int main()
{
	int rem,n,product=1;
	printf("Program to Multiply the Digits of a Given Number");
	printf("\nEnter the number: ");
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		product=product*n;
		n=n/10;
	}
    printf("%d",product);
    getch();
    return 0;
}
