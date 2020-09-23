#include<stdio.h>
#include<conio.h>
main()
{
int i,n,num,c=0,sum=0;
printf("enter the range");
scanf("%d",&n);
for(num=1;num<=n;num++)
{
for(i=1;i<=num;i++)
{
if(num%i==0)
c++;
}
if(c==2)
sum=sum+i;
printf("%d",sum);
}
getch();
}
