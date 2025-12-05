/*To Calculate Area of Circle*/
#include<stdio.h>
#include<conio.h>
#define PI 3.14
void main()
{
	float r,ar; 	//Declaration Part
	clrscr();
	printf("Enter a Radius\n");
	scanf("%f",&r);
	ar=PI*r*r;
	printf("Area of Circle=%0.2f\n",ar);
	getch();
}