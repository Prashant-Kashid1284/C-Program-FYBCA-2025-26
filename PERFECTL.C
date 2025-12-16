/*To Print Perfect Numbers in Between 1 to given Range*/
#include<stdio.h>
#include<conio.h>
void main()
{
	long int n,sum,a,r;
	clrscr();
	printf("Enter Any Range(Limit)\n");
	scanf("%ld",&r);
	for(n=1;n<=r;n++)
	{
		sum=0;
		a=1;
		while(a<n)
		{
			if(n%a==0)
			{
				sum=sum+a;
			}
			a++;
		}
		if(sum==n)
		{
			printf("%ld\t",n);
		}
	}
	getch();
}