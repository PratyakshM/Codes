#include<stdio.h>
#include<conio.h>
main()
{
int num,sqr;
for(num=1;num<=20;num++)
{
if(num%2==0)
{
sqr=num*num;
printf("\n%d",sqr);
}
}
getch();
}
