#include<stdio.h>
#include<conio.h>
int main()
{
	int n, sum=0, rem;
	printf("Program to Print the Summation of Digits of a Given Number");
	printf("\nEnter the number: ");
	scanf("%d",&n);
	while (n!=0)
	{
		rem=n%10;
		sum=sum+rem;
		n=n/10;
	}
    printf("%d",sum);
    return 0;
    getch();
}
