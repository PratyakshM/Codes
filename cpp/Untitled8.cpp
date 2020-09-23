#include<stdio.h>
#include<conio.h>
main()
{
	int i,j;
	for(i=1;i<=3;i++)
	{
		for(j=3;j>=i;j--)
		{
		printf("\t*\t");
	    }
	    printf("\n");
	}
	getch();
}
