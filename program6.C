#include<stdio.h>
#include<conio.h>
int main ()
{
clrscr();
int a;
printf("enter the year");
scanf("%d,&a");
if ((a%4)==0)
printf("leap year");
else
printf("not a leap year");
getch();
return 0;
}
