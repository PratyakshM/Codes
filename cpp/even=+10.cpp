#include<Stdio.h>
#include<conio.h>
main()
{
int a[25],i;
printf("enter the elements in the array \n");
for(i=0;i<5;i++)
scanf("%d",&a[i]);
printf("the array is");
for(i=0;i<5;i++)
printf("%d\t",a[i]);
printf("\n the new array is \n");
for(i=0;i<5;i++)
{
if(i%2==0)
a[i]=a[i+10];
else
a[i]=a[i+5];

printf("%d\t",a[i]);
}
getch();
}
