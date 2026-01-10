/*To Example of typedef user defined data type*/
#include<stdio.h>
#include<conio.h>
void main()                                  //Predefined data types
{                                            //int,float,char,long int
	int a;           //Declaration Part  //double,long double
	typedef float bca;
	typedef double bba;
	bca x;                          //User defined data type
	clrscr();
	printf("%d\n",sizeof(x));      //4
	printf("%d\n",sizeof(bba));    //8
	getch();
}