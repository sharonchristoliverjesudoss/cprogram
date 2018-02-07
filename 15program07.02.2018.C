#include<stdio.h>
int main()
{
	 int a,b,c;
	printf("enter the first number");
	scanf("%d",&a);
	printf("enter the second number");
	scanf("%d",&b);
	for(c=a;c<=b;c++)
	{
		if(c%2==0)
		printf("%d",c);
	}
  getch();
  return 0;
}
