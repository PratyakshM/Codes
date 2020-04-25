#include<stdio.h>
#include<conio.h>
int main()
{
	int n, num, i;
	printf("Enter the number: ");
	scanf("%d",&n);
	num=n;
	if(n%2==0)
	{
		for (i=1; i<num;i=i+2)
		printf("\n%d",i);
	}
    else
    {
    	for(i=1;i<=num;i=i+2)
    	printf("\n%d",i);
	}
	getch();
}
