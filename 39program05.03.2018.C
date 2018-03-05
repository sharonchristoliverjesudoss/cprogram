#include <stdio.h>
#include<conio.h>
int main(void) 
{
	int array[20];
	int m,j,max=array[0];
	printf("enter the number of elements:");
	scanf("%d",&m);
	printf("\n enter the array elements:");
	for(j=0;j<m;j++)
	{
		scanf("%d",&array[j]);
	}
	for(j=0;j<m;j++)
	{
		if(array[j]>max)
		{
			max=array[j];
		}
	}
	printf("\nthe maximum of the numbers is:%d",max);
  getch();
	return 0;
}
