#include <stdio.h>
#include<string.h>
int main()
{
   char s[100];
   int l,count=0,j;
   clrscr();
   scanf("%s",s);
   l=strlen(s);
   for(j=0;j<l;j++)
   {
       if(s[j]==' ')
       count++;
       printf("%d",count);
       else
       printf("%d",count);
   }

    return 0;
}
