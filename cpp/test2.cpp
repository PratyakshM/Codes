#include<stdio.h>
#include<conio.h>
main()
{
	float cp,sp,l,p,a,i;
	printf("enter the cp and sp respectively:-");
	scanf("%f%f",&cp,&sp);
	if(sp>cp)
	{
		p=sp-cp;
		a=(p/cp)*100;
		printf("the profit percent is %f",a);
	}
	else if(cp>sp)
	{
		l=cp-sp;
		i=(l/cp)*100;
		printf("the loss percent is %f",i);
	}
	else
	printf("wrong input");

	getch();
	
	
}
