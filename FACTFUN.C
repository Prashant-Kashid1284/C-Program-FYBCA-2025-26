/*To Calculate Factorial of a given Number using Function*/
#include<stdio.h>
#include<conio.h>
void main()
{	int f,n;        //f,n is a local variable
	int factorial(int x); //Function Declaration
	clrscr();         //local variable is access within a block
	printf("Enter any Number\n");              //1)Function Calling
	scanf("%d",&n);   //a=4,b=3                //2)Function Defination
	f=factorial(n);      //Function Calling    //3)Function Declaration
	printf("Factorial of %d is=%d\n",n,f);     //4)Return Type(Data Type)
	getch();
}
int factorial(int x)         //x is Formal Parameter (Function Defination)
{       int f=1,a;           //f,a is a local variable
	for(a=1;a<=x;a++)
	{
		f=f*a;
	}
	return f;
}