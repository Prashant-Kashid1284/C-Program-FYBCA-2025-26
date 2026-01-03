/*To Calculate Factorial of a given Number using Function*/
#include<stdio.h>
#include<conio.h>
int f=1;		//f is a global variable
void main()
{	int n;        //n is a local variable
	int factorial(int n); //Function Declaration
	clrscr();         //local variable is access within a block
	printf("Enter any Number\n");              //1)Function Calling
	scanf("%d",&n);   //n=5                    //2)Function Defination
	f=factorial(n);      //Function Calling    //3)Function Declaration
	printf("Factorial of %d is=%d\n",n,f);     //4)Return Type(Data Type)
	getch();
}
int factorial(int n)         //x is Formal Parameter (Function Defination)
{       int a;               //a is a local variable
	for(a=1;a<=n;a++)
	{	f=f*a;
	}
	return f;
}