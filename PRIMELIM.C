/*To Print Prime Numbers in Between 1 to given Range*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,flag,a,r;
	clrscr();
	printf("Enter Any Range(Limit)\n");
	scanf("%d",&r);
	for(n=1;n<=r;n++)
	{
		flag=1;
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
			printf("%d\t",n);
		}
	}
	getch();
}