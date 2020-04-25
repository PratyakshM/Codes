#include<stdio.h>
#include<Conio.h>
void main()
{
	int m;
	printf("Enter the marks: ");
	scanf("%d",&m);
	if(m>=80 && m<=100)
	printf("AA!");
	else if(m>=60 && m<=79)
	printf("A");
	else if(m>=40 && m<=59)
	printf("B");
	else
	printf("Disqualified!");
	getch();
}
