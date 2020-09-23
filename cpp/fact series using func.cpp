#include<conio.h>
#include<stdio.h>
float sum(float);
main()
{
	
	float c;
	int n;
	c=sum(n);
	getch();
}
float sum(float b)
{
	
	int a,f=1,n;
	printf("enter the no");
	scanf("%d",&n);
	for(a=1;a<=n;a++)
	{
	f=f*a;
	b=b+1/(float)(a*f);
	}
printf("the sum is %f",b);

}

	
