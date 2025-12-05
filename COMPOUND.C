/*To Calculate Compound Interest(Loan Calculation/Fixed Deposit[FD])*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	float amt,amt1,r,p,ci,tci,emi;
	clrscr();
	printf("Enter a Amount\n");
	scanf("%f",&amt);
	printf("Enter Rate of Interest\n");
	scanf("%f",&r);
	printf("Enter Number of Years(Period)\n");
	scanf("%f",&p);
	amt1=amt;
	a=1;
	while(a<=p)
	{
		ci=amt*r/100;
		amt=amt+ci;
		a++;
	}
	ci=amt-amt1;
	printf("Compound Interest=%0.2f\n",ci);
	printf("Total Compound Interest=%0.2f\n",amt);
	emi=amt/(p*12);
	printf("EMI=%0.2f\n",emi);
	getch();
}
