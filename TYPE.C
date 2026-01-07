/*Example of Implicit Type Casting(Conversion)*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int x=5;     //variable x is character data type
	float y;          //variable y is Interger data type
	clrscr();
	y=x;		//Implicit Type casting(Automatic)
	printf("Value of x=%d\n",x);
	printf("Value of y=%f\n",y);
	getch();
}