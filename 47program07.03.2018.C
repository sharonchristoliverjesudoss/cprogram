#include <stdio.h>
#include <conio.h>

int main(void) 
{
	int array[100];
	int j,m;
	printf("enter the size of the array:");
	scanf("%d",&m);
	printf("\n the array elements are:");
	for(j=0;j<n;j++)
	{
		scanf("%d",&array[j]);
	}
	int max=array[0];
	int min=array[0];
	for(j=1;j<n;j++)
	{
		if(array[j]>max)
		{
			max=array[j];
		}
		if(array[j]<min)
		{
			min=array[j];
		}
	}
	printf("\n%d",min);
	printf("\n%d",max);
  getch();

	return 0;
}
