#include<stdio.h>
#include<conio.h>
main()
{
	int n=10,x1=1,x2=1,next=0,i;
	printf("first %d terms of fibonacci series are",n);
	for(i=0;i<n;i++)
	{
		if(i<=1)
	    {
		next=1;
		printf("%d\t",next);
		}
		else
		{
			next=x1+x2;
			x1=x2;
			x2=next;
		    printf("%d\t",next);
	    }
	}
	getch();
		
	
}
