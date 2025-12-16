/*To Check whether given Number is Perfect or Not*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,sum=0,a;
	clrscr();
	printf("Enter Any Number\n");
	scanf("%d",&n);  //n=12
	a=1;//1<12 T
	while(a<n)
	{
		if(n%a==0)
		{//12%1
		 // 0 ==0 T
			sum=sum+a;
		}         // 0 +1
		a++;
	}
	printf("Sum of Divisors=%d\n",sum);
	if(sum==n)
	{
		printf("%d Number is Perfect",n);
	}
	else
	{
		printf("%d Number is Not Perfect",n);
	}
	getch();
}
