/*To Print 1 to n Numbers*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,n;
	clrscr();
	printf("Enter Any Number(Range)\n");
	scanf("%d",&n);
	a=1;             //Initialization
	while(a<=n)      //Condition
	{
		printf("%d\n",a);       // 1
		a++;		//or a++ or a=a+1    Increment
	}
	getch();
}