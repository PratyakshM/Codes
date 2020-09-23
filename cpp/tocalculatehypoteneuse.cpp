#include<stdio.h>
#include<math.h>
main()
{
	float hy,h,b,i,j;
	printf("enter the values of h,b");
	scanf("%f%f",&h,&b);
	i=hy*hy;
	j=(h*h)+(b*b);
	i=j;
	hy=sqrt(j);
	printf("%f",hy);
}
