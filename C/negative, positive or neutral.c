#include<stdio.h>
#include<conio.h>
int main()
{
	int n, num;
	printf("Enter the number: ");
	scanf("%d",&n);
	if(n<0)
	    {
		     printf("The number is negative.");
	    }
    else if(n==0)
        {
    	     printf("The number is neutral.");
	    }
    else
        {
    	     printf("The number is positive.");
	    }
    return 0;
    getch();
}
