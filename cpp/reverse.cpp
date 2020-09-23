#include<stdio.h>
#include<conio.h>
main()
{
int Ram,Shyam,Ajay;
printf("enter the ages of Ram Shyam and Ajay respectively");
scanf("%d%d%d",&Ram,&Shyam,&Ajay);
if(Ram<Shyam&&Ram<Ajay)
printf("Ram is youngest");
else if(Shyam<Ram && Shyam<Ajay)
printf("Shyam is youngest");
else
printf("Ajay is youngest");
getch();
}

