#include<stdio.h>
#include<conio.h>
main()
{
int a,b,c;
printf("enter the value of a,b and c respectively:");
scanf("%d%d%d",&a,&b,&c);
if((a*a)+(b*b)==(c*c) || (b*b)+(c*c)==(a*a) || (a*a)+(c*c)==(b*b))
printf("pythagoras triangle");
else
printf("not");
getch();
}
