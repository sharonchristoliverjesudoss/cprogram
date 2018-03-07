#include<stdio.h>
#include<conio.h>

#include <stdio.h>

int main(void) 
{
	char s[50];
	int j,count=0;
	printf("enter the string:");
	scanf("%s",s);
	for(j=0;s[j]!='\0';j++)
	{
		if(s[j]>='0' && s[j]<='9')
		{
			count=count+1;
		}
	}
	printf("\n%d",count);
  getch();
	return 0;
}




