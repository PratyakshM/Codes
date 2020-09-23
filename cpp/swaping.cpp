#include<stdio.h>
#include<conio.h>
main()
{
int a,b,c;
printf("enter the numbers");
scanf("%d%d",&a,&b);
c=a;
a=b;
b=c;
printf("\n a is %d,\n b is %d",a,b);
getch();
}
