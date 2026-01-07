#include<stdio.h>
#include<conio.h>
void main()
{
	const char x[20]="Welcome";
	int n;
	clrscr();
	n=strlen(x);          //String Function Number of Character
	printf("String Value of x=%s\n",x);
	printf("Length of String=%d\n",n);
	getch();

}