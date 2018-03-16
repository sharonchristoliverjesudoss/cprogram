#include <stdio.h>
#include <string.h>
int main(void)
{
	char a[10];
	scanf("%s",a);
	int j,flag=0,m;
	m=strlen(a);
	for(j=0;j<m;j++)
	{
		if(a[j]=='1' || a[j]=='0')
		{
			flag=1;
		}
		else
		{
			flag=0;
			break;
      }
   }
if(flag==1)
	{
		printf("yes");
	}
  }
