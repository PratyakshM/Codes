#include<stdio.h>
main()
{
	int i=5;
	printf("%d",i);
	{
		i=9;
		printf("%d",i);
	}
	printf("%d",i);
}
