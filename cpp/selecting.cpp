#include<stdio.h>
#include<conio.h>
main()
{
int a[5],num,i;
printf("enter the elements in array\n");
for(i=0;i<5;i++)
scanf("%d",&a[i]);
printf ( " enter the number you want to search\n");
scanf ("%d",&num);
printf (" the numbers in the array are :- \n");
for(i=0;i<5;i++)
printf("%d\t", a[i]);
for(i=0;i<5;i++)
{

if(num==a[i])
printf("\n number %d present at position %d",num,i);

}
getch();
}
