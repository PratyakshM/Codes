#include<stdio.h>
#include<conio.h>
main()
{
float x,total;
printf("enter the amount");
scanf("%f",&x);
total=(x>3000.0?(x-(x*0.10)):(x-(x*0.05)));
printf("%f",total);
getch();
}
