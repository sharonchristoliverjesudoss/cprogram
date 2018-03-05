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
		if(!((str[j]>='0' && str[j]<='9')||(str[j]>='a' && str[j]<='z')))
		{
			count=count+1;
		}
	}
	printf("\nthe number of special characters in the sentence is:%d",count);
  getch();
	return 0;
}
