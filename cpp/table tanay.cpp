#include<stdio.h>
#include<conio.h>
main()
{
	int i,num,a;
	printf("enter the number is");
	scanf("%d",&num);
	for(i=1;i<=10;i++)
	{
	a=num*i;
	printf("%d*%d\t=\t%d\n",num,i,a);
    }
	getch();
}
