#include<conio.h>
#include<stdio.h>
int prime(int);
main()
{
int x,p;
printf("enter the number");
scanf("%d",&x);
p=prime(x);
getch();
}
int prime(int a)
{
int c=0,i;
for(i=1;i<=a;i++)
{
if(a%i==0)
c++;
}
if(c==2)
{
printf("it is a prime no \n");
}
else
{
printf("it is not a prime no \n");
}

}

