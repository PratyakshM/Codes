#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,n;
	printf("enter the range");
	scanf("%d",&n);
	for(i=1;i<=n;i=i+2)
	{
		for(j=1;j<=i;j=j+2)
		{
			printf("%d\t",j);
		}
		printf("\n");
	}
	getch();
}
