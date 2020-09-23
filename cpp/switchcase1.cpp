#include<stdio.h>
#include<conio.h>
main()
{
	int ch,f=1,a,n,s,c;
	printf("\n 1,Factorial");
	printf("\n 2.Square");
	printf("\n 3.Cube");
	printf("\n enter your choice \n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("enter the value of n \n");
			scanf("%d",&n);
			for(a=1;a<=n;a++)
			f=f*a;
			printf(" the factorial of %d is:-%d",n,f);
			break;
			case 2:
				printf("enter the value of n \n");
				scanf("%d",&n);
				s=n*n;
				printf("square of %d is:-%d",n,s);
				break;
				case 3:
					printf("enter the value of n \n");
					scanf("%d",&n);
					c=n*n*n;
					printf("cube of %d is:-%d",n,c);
					break;
					default:
						printf("N/A");
						}
						
}
