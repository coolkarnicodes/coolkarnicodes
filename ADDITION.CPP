`#include<stdio.h>
#include<conio.h>

void main()
{
 int a,b,c;
 clrscr();
 scanf("%d%d",&a,&b);
 c=a+b;
 printf("%d",c);
 if(c%2==0)
  {
  printf("the solution is even");
  }
  else
  {
  printf("\nthe solution is odd");
  }
 getch();
}