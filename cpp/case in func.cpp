#include<conio.h>
#include<stdio.h>
int addition(int,int);
int substraction(int,int);
main()
{
int ch,x,y;
printf("enter the values of x and y");
scanf("%d%d",&x,&y);
printf("\n 1 Addition");
printf("\n 2 Substraction");
printf("\n enter your choice");
scanf("%d",&ch);
switch(ch)
{
case 1:
	addition(x,y);
    break;
case 2:
    substraction(x,y);
    break;
default:
	printf("nothing");
}
getch();
}
int addition(int a,int b)
{
int add;
add=a+b;
printf("the addition value is %d\n",add);
return add;
}
int substraction(int a,int b)
{
int sub;
sub=a-b;
printf("the sub value is %d\n",sub);
return sub;
}

	
