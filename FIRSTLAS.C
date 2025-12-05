/*To Calculate sum of First & Last digits of a given Number(e.g.n=5673,5+3 sum=8)*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int r,n,sum=0,first,last; 	//Declaration Part
	clrscr();
	printf("Enter any Number\n");
	scanf("%d",&n);   //n=5673
	last=n%10;	  //5673%10=3
	while(n>0)        //0>0 F
	{
		first=n%10;		//5%10=5
		n=n/10;                 //5/10=0
	}
	sum=first+last;
	printf("Sum of Digits=%d\n",sum);
	getch();
}