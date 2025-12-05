/*To Calculate Reverse of a given Number(e.g. n=5673, rev=3765)*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int r,n,rev=0; 	//Declaration Part
	clrscr();
	printf("Enter any Number\n");
	scanf("%d",&n);   //n=5673
	while(n>0)        //0>0 F
	{
		r=n%10;		//5%10=5
		rev=rev*10+r;           //0*10+3*10+7=37*10+6=376*10+5=3765
		n=n/10;                 //5/10=0
	}
	printf("Reverse=%d\n",rev);
	getch();
}