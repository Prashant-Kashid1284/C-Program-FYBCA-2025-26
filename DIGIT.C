/*To Calculate sum of digits of a given Number(e.g. n=5673,5+6+7+3 sum=21)*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int r,n,sum=0; 	//Declaration Part
	clrscr();
	printf("Enter any Number\n");
	scanf("%d",&n);   //n=5673
	while(n>0)        //567>0 T
	{
		r=n%10;		//567%10=7
		printf("%d\t",r);       //3	7
		sum=sum+r;              //0+3=3+7=10
		n=n/10;                 //567/10=56
	}
	printf("Sum of Digits=%d\n",sum);
	getch();
}