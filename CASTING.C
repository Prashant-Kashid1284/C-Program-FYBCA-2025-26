/*Example of Explicit Type Casting(Conversion)*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int x=5,y=3;     //variable x is character data type
	float z;          //variable y is Interger data type
	clrscr();
	z=(float)x/y;	  //Explicit Type casting(forcefully)
	printf("Division=%0.2f\n",z);
	getch();
}