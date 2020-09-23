#include<stdio.h>
#include<conio.h>
main()
{
	int c=0,i,n;
	for(n=10;n<100;n++)
	{
		for(i=1;i<=n;i++)
		{
			if(n%i==0)
			c++;
		
		if(c==2)
		printf("%d",n);
		}
	}
getch();
}
