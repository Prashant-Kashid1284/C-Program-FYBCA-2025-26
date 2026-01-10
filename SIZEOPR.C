/*To Example of sizeof() operator*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a;	           //Declaration Part
	long int x;
	clrscr();
	printf("%d\n",sizeof(a));            //2
	printf("%d\n",sizeof(double));       //8
	printf("%d\n",sizeof(x));            //4
	printf("%d\n",sizeof(float));        //4
	getch();
}