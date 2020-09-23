#include<stdio.h>
#include<conio.h>
main()
{
int ch,a,b,c,num,sum=0,n=0,d,e=0,p=0,f=0;
printf("\n 1.armstrong no");
printf("\n 2.perfect no");
printf("\n 3.prime no");
printf("enter the choice");
scanf("%d",&ch);
printf("enter the num");
scanf("%d",&num);
a=num/100;
d=num/10;
c=num%10;
b=d%10;
sum=a+b+c;
switch(ch)
{
case 1:
	while(num!=0)
	{
	a=sum/100;
	d=sum/10;
	c=sum%10;
	b=d%10;
	n=(a*a*a)+(b*b*b)+(c*c*c);
}
if(n==sum)
printf("armstrong no");
else
printf("not");
break;
case 2:
	for(n=1;n<sum;n++)
	{
	if(sum%n==0)
	e=e+n;
}
if(e==sum)
printf("perfect no");
else
printf("not");
break;
case 3:
	for(n=1;n<=sum;n++)
	{
		if(sum%n==0)
		f++;
	}
	if(f==2)
	printf("prime no");
	else
	printf("not");
	break;
	default:
		printf("nothing");
		getch();
	}
}
	
