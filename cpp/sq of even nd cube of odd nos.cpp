#include<stdio.h>
#include<conio.h>
main()
{
int sq,cu,num,e=0,o=0;
for(num=1;num<=10;num++)
{
if(num%2==0)
{


sq=num*num;
printf("\n even %d",sq);
}
else
{


cu=num*num*num;
printf("\n odd %d",cu);
}
}
getch();
}
