#include<stdio.h>
#include<conio.h>
main()
{
	int c=1,i,n;
	for(n=10;n<100;n++)
	{
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		c=0;
	}
	if(c==1)
	printf("%d prime no",n);

	getch();
}
