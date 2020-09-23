#include<stdio.h>
#include<math.h>
void hypo(float);
main()
{
	float hy,k;
	hypo(hy);
}
void hypo(float hy)
{
    float h,b,i,j;
	printf("enter the values of h,b");
	scanf("%f%f",&h,&b);
	i=hy*hy;
	j=(h*h)+(b*b);
	i=j;
	hy=sqrt(j);
	printf("%f",hy);
}
