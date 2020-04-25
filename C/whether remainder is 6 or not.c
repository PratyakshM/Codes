#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	if(n%10==6)
	{
		printf("The remainder is 6.");
	}
    else
      {
      	printf("The remainder doesn't contain 6.");
	  }
    return 0;
    getch();

}
