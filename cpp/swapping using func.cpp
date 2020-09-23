#include<conio.h>
#include<stdio.h>
int swap(int,int);
main()
{
int x,y,s;
printf("enter the numbers");
scanf("%d%d",&x,&y);
s=swap(x,y);
getch();
}
int swap(int a,int b)
{
a=a+b;
b=a-b;
a=a-b;
printf("a is %d\n b is %d\n",a,b);
return a;
return b;

}
