#include<stdio.h>
#include<conio.h>
main()
{
	int i,n,sum1=0;
	//printf("enter the range");
//	scanf("%d",&n);
	i=20;
	do
	{
		if(i%3==0)
		{
			
			printf("\nthe number %d  is divisible ",i);
			sum1 = sum1+i;
		}
	//	else
	//	{
		
		//sum2=i+i;
	//	printf("\n the number %d is not dividible ",i);
	//	}
		
	i++;
	
}
while(i<=30);
printf ("\n the sum is %d", sum1);
getch();
}
