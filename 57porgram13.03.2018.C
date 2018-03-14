#include <stdio.h>
#include <conio.h>

 

int main(void) 

{

int i,y,temp;

printf("\n enter two numbers to swap:");

scanf("%d %d",&i,&y);

printf("\n before swapping:");

printf("\nx=%d",i);

printf("\ny=%d",y);

temp=x;

x=y;

y=temp;

printf("\n after swapping:");

printf("\nx=%d",x);

printf("\ny=%d",y);

return 0;

}
