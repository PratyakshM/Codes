#include<stdio.h>
#include<conio.h>
main()
{
	int d,sum=0,n,num,f=1,i;
	printf("enter the number");
	scanf("%d",&num);
	num=n;
	while(n>0)
	{
		d=n%10;
		for(i=1;i<=d;i++)
		{
			f=f*i;
        }
		sum=sum+f;
		n=n/10;
	} 
	if(sum==num)
	printf("special no");
	else
	printf("not");
	getch();
}
