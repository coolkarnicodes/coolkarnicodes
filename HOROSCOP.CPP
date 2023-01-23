#include<stdio.h>
#include<conio.h>
#define size 10
void main()
{
clrscr();
char a[size];

printf("enter your zodiac sign");
scanf("%s",&a);
if(a=='taurus' ||a=='sagittarius' ||a== 'pisces')
 {
printf("\n yow will be rewarded by your family, maybe would grant you the permission which you were convincing them");
 }
if(a=='libra' || a=='aquarius' || a=='virgo')
 {
 printf("\n your crsuh will like you back and would ask you out.");
 }
if(a=='leo' || a=='capricon' || a=='gemini')
 {
 printf("\n your carrier leap will be huge,you would be hired by bestest company");
 }
if(a=='aries' || a=='scorpio' || a=='cancer')
 {
  printf("\n Your bank account would be credited with lottery with worth of 100000/-");
 }
getch();
}