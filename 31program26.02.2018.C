#include<stdio.h>
#include<conio.h>

int main(void) 
{
	char str[50];
	int j,count=0;
	printf("enter the sentence:");
	scanf("%[^\n]s",str);
	for(j=0;str[j]!='\0';j++)
	{
		count=count+1;
	}
	for(j=0;str[j]!='\0';j++)
	{
		if(str[j]==' ')
		{
			count=count-1;
		}
	}
	printf("\nthe number of characters in the line are:%d",count);
	return 0;
}








