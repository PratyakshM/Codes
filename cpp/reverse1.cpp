#include<stdio.h>
#include<conio.h>
main()
{
	int rev=0,num,n;
	printf("enter the values \n");
	scanf("%d",&num);
	n=num;
	while(n!=0)
	{
		rev=rev*10;
		rev=rev+n%10;
		n=n/10;
	}
	printf("the reversed no is \n%d",rev);
	getch();
}
