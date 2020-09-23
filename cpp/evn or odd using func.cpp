#include<stdio.h>
#include<conio.h>
int even(int);
main()
{
int x,e;
printf("enter the number");
scanf("%d",&x);
e=even(x);
printf("%d",e);
getch();
}
int even(int a)
{
if(a%2==0)
{
printf("even \n");
return a;
}
else
{
printf("odd \n");
return a;
}
getch();
}
