#include<stdio.h>
#include<conio.h>
int substraction(int,int);
int addition(int,int);
int multiplication(int,int);
int division(int,int);
main()
{
int x,y,w,z,p,q,r,s,ch;
printf("enter the values of w and z");
scanf("%d%d",&w,&z);
printf("enter the value of x and y");
scanf("%d%d",&x,&y);
printf("enter the values of p and q");
scanf("%d%d",&p,&q);
printf("enter the values of r and s");
scanf("%d%d",&r,&s);
printf("\n 1 Substraction");
printf("\n 2 Addition");
printf("\n 3 Multiplication");
printf("\n 4 Division");
printf("enter your choice");
scanf("%d",&ch);
switch(ch)
{
case 1:
	substraction(x,y);
    break;
case 2:
    addition(w,z);
break;
case 3:
	multiplication(p,q);
	break;
case 4:
		division(r,s);
		break;
default:
			printf("nothing");
		}
		getch();
	}
int substraction(int a,int b)
{
int sub;
sub=a-b;
printf("the sub value is %d\n",sub);
return sub;
}

int addition(int c,int d)
{
int add;
add=c+d;
printf("the add value is %d\n",add);
return add;
}
int multiplication(int e,int f)
{
int mul;
mul=e*f;
printf("the multiply value is %d\n",mul);getch();

return mul;
}
int division(int g,int h)
{
int div;
div=g/h;
printf("the division value is %d\n",div);
return div;
}

