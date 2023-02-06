#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,j,a[10]={1,2,3,4,5,6,7,8,9,10},b[10]={0};
for(i=0;i<=9;i++);
  {
  b[a[i]]=b[a[i]]+1;
  }
for(i=0;i<=9;i++)
  {
  printf("\n%d%d",i,b[i]);
  }
getch();
}