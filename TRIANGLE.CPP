#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
if(a==b && b==c && a==c)
 {
 printf("this is an equilateral triangle");
 }
if(a==b || b==c || a==c)
 {
 printf("it is an isosceles triangle");
 }
if(a!=b && b!=c && a!=c)
 {
 printf("this is a scalene triangle");
 }
 getch();
}