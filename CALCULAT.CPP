#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int x,y,z,g;
printf("\n enter 1 for addition");
printf("\n enter 2 for multiplication");
printf("\n enter 3 fpr subtraction");
scanf("%d",&g);
if(g==1)
  {
   scanf("%d%d",&x,&y);
   z=x+y;
   printf("%d",z);
  }
if(g==2)
 {
 scanf("%d%d",&x,&y);
 z=x*y;
 printf("%d",z);
 }
if(g==3)
 {
 scanf("%d%d",&x,&y);
 z=x-y;
 printf("%d",z);
 }
 getch();
}