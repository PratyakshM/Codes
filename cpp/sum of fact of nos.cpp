#include<Stdio.h>
#include<conio.h>
main()
{
int fact=1,a,n;
float sum=0.0;
printf("enter the range");
scanf("%d",&n);
for(a=1;a<=n;a++)
{
fact=fact*a;
sum=sum+1.0/fact;
}
printf("the sum is  %f",sum);
getch();
}
