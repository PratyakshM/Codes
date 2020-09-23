#include<stdio.h>
#include<conio.h>
main()
{
int a,b,big;
printf("enter the value of a and b respectively");
scanf("%d%d",&a,&b);
big=(a>b?a:b);
printf("the bigger number is %d\t",big);
getch();
}
