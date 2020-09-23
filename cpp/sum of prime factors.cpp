#include<stdio.h>
#include<conio.h>
main()
{
	int num,sum=0,i,c=0,a;
	printf("enter the no \n");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
	if(num%i==0)
	{
	for(a=1;a<=i;a++)
	{
	if(i%a==0)
	c++;
}if(c==2||c==1)
sum=sum+i;
printf("%d",sum);
}
}
getch();
}
	
