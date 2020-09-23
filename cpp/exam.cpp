#include<stdio.h>
#include<conio.h>
main()
{
int math,ee,c,grandtotal,percentage;
printf("subjects are");
scanf("%d",&math);
scanf("%d",&ee);
scanf("%d",&c);
grandtotal=(math+ee+c);
printf("\n grand total is %d", grandtotal);


percentage=grandtotal/3;
printf("\n the percentage is %d", percentage);
if (percentage >= 60)
{
	
	printf("\n the division is first");
}

 else if(percentage>= 40 && percentage <=59)
{
	
	printf("\nthe division is second");
}
else if(percentage>=25 && percentage <=39)
{
	
	printf("\n the division is third");
}
else
printf("\n fail");
getch();
}

