#include<stdio.h>
int main()
{
	int m,i,fact=1;
	scanf("%d",&m);
	for(i=1;i<=m;i++)
	{
		fact=fact*i;
	}
	printf("%d",fact);
	return 0;
}
