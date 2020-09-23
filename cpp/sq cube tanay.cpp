#include<stdio.h>
#include<conio.h>
main()
{
int i,n,sq,cube;
printf("enter the range");
scanf("%d",&n);
i=1;
do
{
	if (i%2==0)
	{
	
		sq=i*i;
		printf("\n the square of %d is %d",i, sq);

		
	}
	
	else
	{

	cube=i*i*i;
	printf("\n the cube of %d is %d",i,cube);
   }
   i++;
   }while(i<=5);
getch();
}

