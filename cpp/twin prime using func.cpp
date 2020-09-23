#include<stdio.h>
#include<conio.h>
int prime(int);
main()
{
	int x,y,n;
	printf("enter the value of x,y");
	scanf("%d%d",&x,&y);
	int a =prime(x);
	int b=prime(y);
	if((a==2&&b==2)&&((x-y)==2||(y-x)==2))
	printf("twin prime");
	else
	printf("not");
}
int prime(int x)
{
	int a,c=0,f;
//	printf("enter the value of n");
//	scanf("%d",&n);
	for(a=2;a<=x;a++)
	{
		if(x%a==0)
		c++;
	}
	if(c==2)

	return(c);
}
