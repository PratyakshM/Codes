#include<stdio.h>
#include<conio.h>
int main()
{
	int n, num, i;
	printf("Enter a number: ");
	scanf("%d",&n);
	num=n;
	if(n%2==0)
	{
		for(i=2; i<=num; i=i+2)
		printf("\n%d",i);
	}
	else
	{
		for(i=2;i<num;i=i+2)
		printf("\n%d",i);
	}
	return 0;
	getch();	
}
