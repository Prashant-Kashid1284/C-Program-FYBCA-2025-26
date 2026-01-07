#include<stdio.h>
#include<conio.h>
#define PI 3.14
			//# is a preprocessor(Process before Compilation)
#define SIZE 50
void main()
{
	char x[SIZE]="Samarth college of Compuer Science";
	float a,r;
	clrscr();
	printf("Enter a Radius\n");
	scanf("%f",&r);
	a=PI*r*r;
	printf("Area of Circle=%0.2f\n",a);
	printf("String Value=%s\n",x);
	getch();

}
