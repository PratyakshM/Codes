#include<stdio.h>
#include<conio.h>
main()
{
int salary,dearness,rent,remaining;
printf("enter the salary");
scanf("%d",&salary);
dearness=salary*40/100;
printf(" \n the dearness allowance is %d" , dearness);
rent=salary*20/100;
printf(" \n the rent allowence is %d" , rent);
remaining=salary-(dearness+rent);
printf("\n the remaining is %d" , remaining);
getch();
}

