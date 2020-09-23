#include<stdio.h>
#include<conio.h>
main()
{
float hr,i;
printf(" enter the time");
scanf("%d", &hr);
for(i=0.00;i<=24.00;i++)
{
if(hr<12.00)
printf("%f AM",hr);
else
printf("\n %f PM", hr);
}
getch();
}
