/*To Print 1 to 5 Numbers using while loop*/
#include<stdio.h>
#include<conio.h>
void main()
{
	char a;
	clrscr();
	a='a';             //Initialization
	while(a<='z')      //Condition
	{
		printf("%d\n",a);       //
		a++;
	}
	getch();
}