#include<stdio.h>
#include<conio.h>
//structure in array and highest marksand swapping it with the lowest
struct newdatatype
{
int roll;
char name[20];
int marks;
};
typedef struct newdatatype coolkarni;
void main()
{
clrscr();
coolkarni st[5];
int i,j,max=0,k,min=61,temp;
for(i=0;i<=4;i++)
 {
 scanf("%d %s %d",&st[i].roll,&st[i].name,&st[i].marks);
 }
for(i=0;i<=4;i++)
 {
 printf("\n %d%s%d",st[i].roll,st[i].name,st[i].marks);
 }
for(i=0;i<=4;i++)
 {
 if(st[i].marks>max)
  {
  max=st[i].marks;
  j=i;
  }
  if(st[i].marks<min)
   {
    min=st[i].marks;
    k=i;
   }
 }
printf("\nThe highest marks is of %d%s%d",st[j].roll,st[j].name,st[j].marks);
printf("\nThe lowest marks is of %d%s%d",st[k].roll,st[k].name,st[k].marks);
temp=st[j].marks;
st[j].marks=st[k].marks;
st[k].marks=temp;


for(i=0;i<=4;i++)
 {
 printf("\n %d%s%d",st[i].roll,st[i].name,st[i].marks);
 }


getch();
}