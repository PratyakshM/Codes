#include<stdio.h>
#include<conio.h>
main()
{
	int n=0,x1=1,x2=1,next=0,i;
	printf("enter the no of terms \n");
	scanf("%d",&n);																																																																																																																																																																																																																																																																																																																																																																																																																													
	printf("first %d terms of the fibonacci series are \n",n);
	for(i=0;i<n;i++)
	{
		if(i<=1)
		next=1;
		else
		{
			next=x1+x2;
			x1=x2;
			x2=next;
		}
	
		printf("%d\t",next);
}
	getch();
}
