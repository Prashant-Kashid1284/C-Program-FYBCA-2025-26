/*To Print n to 1 Numbers*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,n;
	clrscr();
	printf("Enter Any Number(Range)\n");
	scanf("%d",&n);
	a=n;             //Initialization
	while(a>=1)      //Condition
	{
		printf("%d\n",a);
		a--;    //Decrement
	}
	getch();
}