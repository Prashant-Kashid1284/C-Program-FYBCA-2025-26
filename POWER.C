/*x to power of y using without pow() function*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int x,y,p;
	clrscr();
	printf("Enter a Value of x and y\n");
	scanf("%d%d",&x,&y);        //Input x=5,y=6
	p=pow(x,y);
	printf("Power=%d\n",p);
	getch();
}