#include<stdio.h>
#include<conio.h>
void circle(float);
main()
{ 
	float r,a;
	printf("enter the value of r \n");
	scanf("%f",&r);
	circle(r);
}
void circle(float r)
{
	float s,p=3.14;
	s=p*r*r;
	printf("the area is %f",s);
}
	

