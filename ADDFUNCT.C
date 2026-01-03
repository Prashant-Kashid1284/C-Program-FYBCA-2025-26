/*To Calculate addition of Two Numbers using Function*/
#include<stdio.h>
#include<conio.h>
int c;		    //c is a global Variable(Outside)
void main()         //Global Variable can access EveryWhere of program
{
	int a,b;        //a,b is a local variable
	int addition(int a,int b);
	clrscr();         //Local variable is access within a block
	printf("Enter any 2 Number\n");             //1)Function Calling
	scanf("%d%d",&a,&b);   //a=4,b=3            //2)Function Defination
	c=addition(a,b);                            //3)Function Declaration
	printf("Addition=%d\n",c);                  //4)Return Type(Data Type)
	getch();
}
int addition(int a,int b)         //a,b is Formal Parameter
{
	c=a+b;     //c=4+3=7
	return c;
}