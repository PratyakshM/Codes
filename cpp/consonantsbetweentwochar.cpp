#include<stdio.h>
#include<conio.h>
main()
{
	char x,y,i;
	int a=0;
	printf("enter the values of x,y");
	scanf("%c%c",&x,&y);
	if(x<y)
	{
		for(i=x;i<=y;i++)
		{
			if((i!=65)||(i!=69)||(i!=73)||(i!=79)||(i!=85))
			a++;
			else if((i!=97)||(i!=101)||(i!=105)||(i!=111)||(i!=117));
			a++;
		}
		printf("%d\n",a);
	}
	else if(y<x)
	{
		for(i=y;i<=x;i++)
		{
			if((i!=65)||(i!=69)||(i!=73)||(i!=79)||(i!=85))
			a++;
			else if((i!=97)||(i!=101)||(i!=105)||(i!=111)||(i!=117));
			a++;	
		}
		printf("%d\n",a);
	}
	else
	printf("N/A");
	getch();
}
