/*Example of Implicit Type Casting(Conversion)*/
#include<stdio.h>
#include<conio.h>
void main()
{
	char x='d';     //variable x is character data type
	int y;          //variable y is Interger data type
	clrscr();
	y=x;		//Implicit Type casting(Automatic)
	printf("Value of x=%c\n",x);
	printf("Value of y=%d\n",y);
	getch();
}


