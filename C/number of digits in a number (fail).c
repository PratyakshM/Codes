#include<stdio.h>
#include<conio.h>
int main()
{
	int n, count=0;
	printf("Enter the number: ");
	scanf("%d",&n);
	while (n!=0)
	{
		n=n/100;
		count=count+1;
	}
    printf("The number of digits is %d",count);
    getch();
    return 0;
}

