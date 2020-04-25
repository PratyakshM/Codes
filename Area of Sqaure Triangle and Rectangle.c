#include<Stdio.h>
int main()
{
	int base, height, at, side, as, breadth, length, ar;
	printf("-----AREA OF TRIANGLE-----");
	printf("\nEnter the base and height seperated by space: ");
	scanf("%d %d", &base, &height);
	at=(base*height)/2;
	printf("Area of Triangle: %d",at);
	printf("\n\n-----AREA OF SQUARE-----");
	printf("\nEnter the length of side of square: ");
	scanf("%d",&side);
	as=side*side;
	printf("Area of Square is %d",as);
	printf("\n\n-----AREA OF RECTANGLE-----");
	printf("\nEnter the length of breadth and height: ");
	scanf("%d %d",&breadth, &length);
	ar=breadth*length;
	printf("Area of Rectangle is %d",ar);
	return 0;
	
}
