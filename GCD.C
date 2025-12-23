/*To Find GCD(Greatest Common Divisor) of Two Numbers*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y,gcd,min,a;
	clrscr();
	printf("Enter Any Two Numbers\n");
	scanf("%d%d",&x,&y);
	min=(x<y)?x:y;                      // ; Semicolon
	for(a=min;a>=1;a--)
	{
		if(x%a==0 && y%a==0)
		{
			gcd=a;
			break;
		}
	}
	printf("GCD=%d\n",gcd);         // : colon
	getch();
}

