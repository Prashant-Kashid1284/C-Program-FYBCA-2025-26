/*To Print sum of Fibonacci series upto n Terms*/
#include<stdio.h>
#include<conio.h>
void main()
{
	long int n,a,f1=4,f2=7,f3;
	clrscr();
	printf("Enter How Many Terms\n");
	scanf("%ld",&n);
	printf("To Print Sum of Fibonacci Series\n");
	printf("%ld\t%ld\t",f1,f2);
	for(a=1;a<=n-2;a++)
	{
		f3=f1+f2;
		printf("%ld\t",f3);
		f1=f2;
		f2=f3;
	}
	getch();
}