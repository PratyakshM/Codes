#include<conio.h>
#include<stdio.h>
int avg(int,int,int);
int per(int,int,int);
main()
{
int x,y,z;
printf("enter the values of");
scanf("%d%d%d",&x,&y,&z);
avg(x,y,z);
per(x,y,z);
getch();
}
int avg(int a,int b,int c)
{
int average;
average=(a+b+c)/3;
printf("the average is %d\n",average);
return average;
}
int per(int d,int e,int f)
{
float percentage,tot;
//scanf("%d%d%d",&d,&e,&f);
tot=d+e+f;
percentage=(tot/300.0)*100.0;
printf("the percentage is %f\n",percentage);
return percentage;
}
