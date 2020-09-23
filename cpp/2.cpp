#include<stdio.h>
main()
{
	int i=5;
	printf("%d",i);
	{
		i=0;
		if(i)
		i=6;
		printf("\n%d",i);
	}
}
