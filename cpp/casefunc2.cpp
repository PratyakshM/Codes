#include<stdio.h>
#include<conio.h>
int even(int);
int perfect(int);
int prime(int);
int armstrong(int);
main()
{
int ch,x;
printf("enter the values of x");
scanf("%d",&x);
printf("\n 1 even");
printf("\n 2 perfect");
printf("\n 3 prime");
printf("\n 4 armstrong");
printf("\n enter your choice");
scanf("%d",&ch);
switch(ch)
{
case 1:
	even(x);
	break;
	case 2:
		perfect(x);
		break;
		case 3:
			prime(x);
			break;
			case 4:
				armstrong(x);
				break;
				defalut:
					printf("nothing");
				}
				getch();
			}
			int even(int a)
			{
			if(a%2==0)
			printf("even");
			else
			printf("odd");
			return a;
		}
		int perfect(int a)
		{
		int i;
		for(i=1;i<a;i++)
		{
		if(a%i==0)
		printf("perfect no");
		else
		printf("not");
		return a;
	}
	int prime(int a)
	{
	int i,c=0;
	for(i=1;i<=a;i++)
	{
	if(a%2==0)
	c++;
}
if(c==2)
printf("prime no");
else
printf("not");
return a;
}

