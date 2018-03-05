#include <stdio.h>
#include<conio.h>
#include<string.h>
int main(void) 
{
	char str1[50],str2[50];
	int j,i;
	printf("enter the string1:");
	scanf("%s",str1);
	printf("\n enter the string2:");
	scanf("%s",str2);
	for(j=0;str1[j]!='\0';j++)
	{
		
	}
	for(i=0;str2[i]!='\0';j++)
	{
		str1[j]=str2[i];
		j++;
	}
	str1[i]='\0';
	printf("\n%s",str1);
	getch();
  
	return 0;
}
