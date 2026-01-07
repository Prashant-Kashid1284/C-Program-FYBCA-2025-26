#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char x[20]="liril";
	int n,a=70,b;
	clrscr();
	b=a;           //Assignment Operator
	printf("Value of a=%d\n",a);        //a=70
	printf("Value of b=%d\n",b);        //b=70
	n=strlen(x);          //String Function Number of Character
	printf("String Value of x=%s\n",x);
	printf("Length of String=%d\n",n);
	strrev(x);
	printf("Reverse String Value of x=%s\n",x);
	getch();
}