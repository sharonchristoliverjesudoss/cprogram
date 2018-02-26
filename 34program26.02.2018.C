#include<stdio.h>
#include<conio.h>
int main(void) 
{
	char str[50];
	int j,count=1;
	printf("enter the sentence:");
	scanf("%[^\n]s",str);
	for(j=0;str[j]!='\0';i++)
	{
		if(str[j]=='.')
		{
			count=count+1;
		}
}
  printf("\nno of lines is=%d",count);
  getch();
  return 0;
}
