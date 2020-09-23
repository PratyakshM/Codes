#include<stdio.h>
#include<conio.h>
main()
{
	int ch;
	printf("\n 1.Addition");
	printf("\n 2.Substraction");
	printf("\n 3.Multiplication");
	printf("\n 4.Division");
	printf("enter the choice");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			int a,b,sum=0;
			printf("enter the numbers");
			scanf("%d%d",&a,&b);
			sum=a+b;
			printf("the added value is %d",sum);
			break;
			case2:
				int c,d,sub=0;
				printf("enter the numbers");
				scanf("%d%d",&c,&d);
				if(a>b)
				sub=a-b;
				else
				sub=b-a;
				printf("the substracted value is %d",&sub);
				break;
				case 3:
					int e,f,mul=0;
					printf("enter the numbers");
					scanf("%d%d",&e,&f);
					mul=e*f;
					printf("the multiplied value is %d",mul);
					break;
					case 4:
						int g.h;
						float div=0;
						printf("enter the numbers");
						scanf("%d%d",&g,&h);
						div=g/h;
						printf("the divided value is %f",div)
						break;
						default:
							printf("nothing");
						}
						getch();
				}
