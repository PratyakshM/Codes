#include<stdio.h>
main()
{
	
	int a;
	char ch;
	printf("Enter the number: ");
	scanf("%d",&a);
	printf("Press dividing by 2, press 'A', by 3, press 'B', by 5, press 'C'");
	scanf("%c",&ch);
	switch(ch);
	{
		case A:
			if(a%2==0)
			printf("The number is divisible by 2");
			else
			printf("The number is not divisible by 2");
			break;
		case B:
			if(a%3==0)
			printf("The number is divisible by 3");
			else
			printf("The number is not divisible by 3");
			break;
		case C:
			if(a%5==0)
			printf("The number is divisible by 5");
			else
			printf("The number is not divisible by 5");
			break;
		default:
			printf("You haven't entered a choice.");
	}
}
