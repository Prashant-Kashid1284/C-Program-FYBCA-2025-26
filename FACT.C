/*To Calculate Factorial of a given Number using for loop(e.g. n=5, 1x2x3x4x5 fact=120)*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int fact=1,n,a; 	//Declaration Part
	clrscr();
	printf("Enter any Number\n");
	scanf("%d",&n);   //n=5
	for(a=1;a<=n;a++)
	{
		fact=fact*a;
	}
	printf("Factorial=%d\n",fact);
	getch();
}