#include<stdio.h>
#include<conio.h>
main()
{
int num=20,i,a,b;
for(i=1;i<=num;i++)
{
if(num%i==0)
{

a=i*i;
printf("\n\n %d is  prime and its square is %d",i,a);
}
else
{

b=i*i*i;
printf("\n\n %d is not prime and its cube is %d",i,b);
}
}
getch();
}
