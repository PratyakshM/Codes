#include<stdio.h>
#include<conio.h>
int min(int);
main()
{
	int h,m,i,s=0;
	printf("enter the time in hours and then in mins");
	scanf("%d%d",&h,&m);
	i=min(h);
	s=m+i;
	printf(" total min = %d",s);
}
int min(int h)
{
	int j;
	j=h*60;
	return(j);
}

