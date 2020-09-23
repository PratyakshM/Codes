#include<stdio.h>
#include<conio.h>
main()
{
float serno,pmr,cr,bill,unit,charge=1.5;
printf("enter the values of ser no");
printf("enter the value of pmr");
printf("enter the values of cr");
scanf("%f%f%f",&serno,&pmr,&cr);
unit=cr-pmr;
printf("\n the units consumed is %f",unit);
bill=charge*unit;
printf("\n the electricity charges is %f",bill);
getch();
}

