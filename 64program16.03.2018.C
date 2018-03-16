#include <stdio.h>
#include<conio.h>
int main(void) 
{
	int n,n2,sum;
	printf("enter the number1:");
	scanf("%d",&n);
	printf("enter the number2:");
	scanf("%d",&n2);
	sum=n+n2;
	if(sum%2==0)
	{
		printf("\neven");
	}
	else
	{
		printf("\nodd");
	}
	return 0;
}
