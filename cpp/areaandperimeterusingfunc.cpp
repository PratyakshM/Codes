#include<stdio.h>
#include<conio.h>
int area(int,int);
int perimeter(int,int);
main()
{
int x,y;
printf("enter the two values");
scanf("%d%d",&x,&y);
area(x,y);
perimeter(x,y);
getch();
}
int area(int a,int c)
{
int ar;
ar=a*c;
printf("the area is %d\n",ar);
return ar;
}
int perimeter(int l,int b)
{
int per;
per=2*(l+b);
printf("the perimeter is %d\n",per);
return per;
}
