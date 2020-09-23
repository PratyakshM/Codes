#include<stdio.h>
#include<conio.h>
main()
{
int num,n,rev=1;
printf("enter the number");
scanf("%d",&num);
n=num;
while(n!=0)
{
rev=rev*10;
rev=rev+n%10;
n=n/10;
}
if(rev==n)
printf("palindrome");
else
printf("not");

getch();
}
