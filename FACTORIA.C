/*To Calculate Factorial of a given Number(e.g. n=5, 1x2x3x4x5 fact=120)*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int fact=1,n,a; 	//Declaration Part
	clrscr();
	printf("Enter any Number\n");
	scanf("%d",&n);   //n=5
	a=1;
	while(a<=n)
	{
		fact=fact*a;
		a++;
	}
	printf("Factorial=%d\n",fact);
	getch();
}