/*To Check whether given Number is Armstrong or Not(e.g.153=1*1*1+5*5*5+3*3*3=153 Armstrong)*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int m,r,n,sum=0; 	//Declaration Part
	clrscr();
	printf("Enter any Number\n");
	scanf("%d",&n);   //n=153
	m=n;
	while(n>0)        //0>0 F
	{
		r=n%10;		//1%10=1
		sum=sum+r*r*r;           //0+3*3*3=27+5*5*5=152+1*1*1=153
		n=n/10;                 //1/10=0
	}
	printf("Sum of Cube of each digits=%d\n",sum);    //153

	if(sum==m)
	{//153==153 T
		printf("%d Number is Armstrong\n",m);
	}
	else
	{
		printf("%d Number is Not Armstrong\n",m);
	}
	getch();
}