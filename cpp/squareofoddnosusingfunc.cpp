#include<stdio.h>
#include<conio.h>
void odd(int);
main()
{
	int n;
	odd(n);
}
void odd(int n)
{
	int s;
	for(n=1;n<=25;n++)
	{
		if(n%2!=0)
		{
			s=n*n;
			printf("%d\n",s);
		}
	}
	}    

