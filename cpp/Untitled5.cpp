#include<stdio.h>
#include<conio.h>
main()
{
int rev,num;
printf("enter the number");
scanf("%d",&num);
while(num!=0)
{
rev=rev*10;
rev=rev+num%10;
num=num/10;
}
printf("%d",rev);
if(num == rev)
{
	printf("both are equal");
}
else if (rev<num)
{
		
	printf("\n num is larger");
}
	else
	{
	
	printf("\n rev is larger");
}
getch();
}

