#include<stdio.h>
#include<conio.h>
main()
{
	int i,n=20,sq,cube;
	
	for(i=1;i<=n/2;i++)
	{
	
	if(n%i==0)
	{ 
	sq=i*i;
	printf("\n %d the prime number %d\n",i,sq);
}
	else
	{
		cube=i*i*i;
		printf("\n %d the number is not prime %d \n ",i,cube);
	}
	}
		getch();
	
	}
	

