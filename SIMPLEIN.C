/*To Calculate Simple Interest(Loan Calculation/Fixed Deposit[FD])*/
#include<stdio.h>
#include<conio.h>
void main()
{
	float amt,r,p,si,tsi,emi;
	clrscr();
	printf("Enter a Amount\n");
	scanf("%f",&amt);
	printf("Enter Rate of Interest\n");
	scanf("%f",&r);
	printf("Enter Number of Years(Period)\n");
	scanf("%f",&p);
	si=amt*r*p/100;
	printf("Simple Interest=%0.2f\n",si);
	tsi=amt+si;
	printf("Total Simple Interest=%0.2f\n",tsi);
	emi=tsi/(p*12);
	printf("EMI=%0.2f\n",emi);
	getch();
}
