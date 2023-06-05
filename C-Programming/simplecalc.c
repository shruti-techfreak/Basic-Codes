#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int input()
{
	int i;
	printf("Enter number");
	scanf("%d", &i);
	return i;
}
void main()
{
	int a, b,c;
	int x;
	int y=1;
	do
	{
	printf("Enter\n 1 for addition\n 2 for substraction\n 3 for multiplication\n 4 for division\n 5 for exit\n");
	scanf("%d", &x);
	switch(x)
	{
		case 1:
			a= input();
			b= input();
			c=a+b;
			printf("%d\n", c);
			break;
		case 2:
			a= input();
			b= input();
			c=a-b;
			printf("%d\n", c);
			break;
		case 3:
			a= input();
			b= input();
			c=a*b;
			printf("%d\n", c);
			break;
		case 4:
			a= input();
			b= input();
			c=a/b;
			printf("%d\n", c);
			break;
		case 5:
			y=0;
			printf("Thankyou for using calculator\n");
			break;
		default:
			printf("Wrong Choice!\n");

	}
	getch();
	system("cls");
}
while(y==1);
//getch();
//system("cls");
}
