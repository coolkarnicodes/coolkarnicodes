#include<stdio.h>
#include<conio.h>

void main()
{
clrscr();
int i,j;
scanf("%d%d",&i,&j);
printf("these are thee before swap values",i,j);
i=i+j;
j=i-j;
i=i-j;
printf("\n%d\n %d these are the values after swapping",i,j);
getch();


}