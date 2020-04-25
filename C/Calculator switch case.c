#include<stdio.h>
#include<conio.h>
main()
{
	int a, b, add, diff, prod, div, S, M, A, D;
	char ch;
	printf("Enter the 2 numbers: ");
	scanf("%d %d",&a,&b);
	printf("Press 'A' for addition, 'S' for substraction, 'M' for multiplication, 'D' for division");
	scanf("%c",&ch);
	switch(ch);
	
{
	case A:
		add=a+b;
		printf("The addition is %d",add);
		break;


	case S:
		if(b<a)
		diff=a-b;
		else if(b>a)
		diff=b-a;
		printf("The difference is %d",diff);
		break;



	case M:
		prod=a*b;
		printf("The product is %d",prod);
		break;




	case D:
		if(a>b)
		div=a/b;
		else if(a<b)
		div=b/a;
		printf("The quotient is %d",div);
		break;

	default:
		printf("You haven't entered a valid selection.");
}
}
