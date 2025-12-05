/*To Calculate Sum of 1 to n Numbers*/
#include<stdio.h>
#include<conio.h>
void main()
{
	long int a,n,sum=0;
	clrscr();
	printf("Enter Any Number(Range)\n");
	scanf("%ld",&n);
	a=1;
	while(a<=n)
	{
		sum=sum+a;
		printf("%ld\n",a);
		a++;
	}
	printf("Sum=%ld\n",sum);
	getch();
}