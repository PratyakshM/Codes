#include<stdio.h>
#include<conio.h>
int fact(int);
main()
{
int n;
int a,f,b;
printf("enter the number");
scanf("%d",&n);
f=fact(n);
printf ( "\n the factorial is %d ", f);
getch();
}
int fact(int x)
{
	int i, f=1;
	if (x==1)
	return 1;
	else
	f= x * fact(x-1);
	return f;
	}

