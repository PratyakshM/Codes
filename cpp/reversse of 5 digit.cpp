#include<stdio.h>
#include<conio.h>
main()
{
int rev=0,num;
printf("enter the num");
scanf("%d",&num);
while(num!=0)
{
rev=rev*10;
rev=rev+num%10;
num=num/10;
}
printf("%d",rev);
getch();
}

