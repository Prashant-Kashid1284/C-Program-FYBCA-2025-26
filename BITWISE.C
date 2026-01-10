/*To Example of Bitwise Operators*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a=45,b=35;           //Declaration Part
	clrscr();
	printf("%d\n",a&b);  //Bitwise AND
	printf("%d\n",a|b);  //Bitwise OR
	printf("%d\n",a^b);  //Bitwise XOR
	printf("%d\n",a<<3);  //Left Shift
	printf("%d\n",b>>2);  //Right Shift
	getch();
}

