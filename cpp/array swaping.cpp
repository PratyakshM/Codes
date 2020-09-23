#include<stdio.h>
#include<conio.h>
main()
{
int i,A[5],a,b,c;
printf("enter the elements in array");
for(i=0;i<5;i++)
scanf("%d",&A[i]);
a=A[2];
b=A[3];
c=a;
a=b;
b=c;
printf("the swapped element in a is %d\t the swapped element in b is %d\t",a,b);
getch();
}
