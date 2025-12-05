/*To Check whether given Number is Palindrome or Not(e.g.121=121 Palindrome)*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int p,r,n,rev=0; 	//Declaration Part
	clrscr();
	printf("Enter any Number\n");
	scanf("%d",&n);   //n=121
	p=n;              //p=121
	while(n>0)        //0>0 F
	{
		r=n%10;		//1%10=1
		rev=rev*10+r;           //0*10+1*10+2=12*10+1=121
		n=n/10;                 //1/10=0
	}
	printf("Reverse=%d\n",rev);
	printf("Original Number=%d\n",p);
	if(rev==p)
	{//121==121  T
		printf("%d Number is Palindrome\n",p);
	}
	else
	{
		printf("%d Number is Not Palindrome\n",p);
	}
	getch();
}