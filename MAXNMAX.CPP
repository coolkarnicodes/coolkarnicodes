#include<stdio.h>
#include<conio.h>

void main()
{
clrscr();
int i, A[10]={1,2,3,45,6,7,8,9,10};
int max=0, nmax

for(i=0;i<=9;i++)
 {
 if(A[i]>max)
  {
  nmax=max;
  max=A[i];
  }
  else
  if(A[i]>nmax);
  {
  nmax=A[i];
  }
 }
printf("\n%d %d",max,nmax);
getch();
}