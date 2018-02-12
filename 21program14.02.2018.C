#include<stdio.h>
int main()
{
	int m,i,a=0,b=1,t;
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
	printf("%d\n",a);
	t=a+b;
	a=b;
	b=t;
	
	}
	return 0;
}
