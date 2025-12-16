/*To Check whether given Number is Prime or Not*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,flag=1,a;
	clrscr();
	printf("Enter Any Number\n");
	scanf("%d",&n);
	a=2;
	while(a<n)
	{
		if(n%a==0)
		{
			flag=0;
			break;
		}
		a++;
	}
	if(flag==1)
	{
		printf("%d Number is Prime",n);
	}
	else
	{
		printf("%d Number is Not Prime",n);
	}
	getch();

}