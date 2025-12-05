/*To Print 1 to 5 Numbers using do-while loop*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	a=1;             //Initialization
	do
	{
		printf("%d\n",a);       // 1
		a++;                    //Increment
	}while(a<=5);      //Condition
	getch();
}