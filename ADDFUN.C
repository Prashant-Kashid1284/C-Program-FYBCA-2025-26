/*To Calculate addition of Two Numbers using Function*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;        //a,b,c is a local variable
	int addition(int x,int y);	//Function Declaration
	clrscr();         //Local variable is access within a block
	printf("Enter any 2 Number\n");             //1)Function Calling
	scanf("%d%d",&a,&b);   //a=4,b=3            //2)Function Defination
	c=addition(a,b);  //Function Calling        //3)Function Declaration
	printf("Addition=%d\n",c);                  //4)Return Type(Data Type)
	getch();
}
int addition(int x,int y)         //x,y is Formal Parameter
{                                 //Function Defination
	int z;     //z is a local Variable
	z=x+y;     //z=4+3=7
	return z;
}