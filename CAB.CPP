#include <stdio.h>
#include<stdlib.h>
int main(void)
{
char cab;

{
int c,t,s,e,d,to;
clrscr();
do
{
printf("Welcome to UBER\n");
printf("\n enter 1 for taxi 1");
printf("\n enter 2 for taxi 2");
printf("\n enter 3 for exit");

scanf("%c",&c);

	if(c==1)
	{
	printf("Enter the count of the trips:\n");
	scanf("%d",&t);
	printf("Enter the starting Kilometers of the day started:\n");
	scanf("%d",&s);
	printf("Enter the Ending Kilometers of the day ended:\n");
	scanf("%d",&e);
	d = e - s;
	printf("Your Car Number is AP05 AE 8887\n");
	printf("Total trips count:%d\n",t);
	printf("Total Kilometers Driven today is:%dkm\n",d);
	printf("Income per each kilometer: Rs.8\n");
	to = 8 * d;
printf("Total Income:%d\n",to);
}
else if(c==2)
{
printf("Enter the count of the trips:\n");
scanf("%d",&t);
printf("Enter the starting Kilometers of the day started:\n");
printf("Enter the Ending Kilometers of the day ended:\n");
scanf("%d",&e);
d = e - s;
printf("Your Car Number is AP05 AR 9875\n");
printf("Total trips count:%d\n",t);
printf("Total Kilometers Driven today is:%dkm\n",d);
printf("Income per each kilometer: Rs.8\n");
to = 8 * d;
printf("Total Income:%d\n",to);
}
else if (c==3)
{
	exit(0);
	break;
}
else
{
printf("Wrong Input");
}
}
while(1)
}
}
//printf(highest used taxi)
//high rated service
//total sales of both taxi
}
