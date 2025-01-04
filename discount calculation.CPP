#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a;
float discount=0.0,total;
printf("enter the value of a\n");
scanf("%d",&a);
if (a>=1000)
{
printf("10 percent discount\n");
discount=(float)a*10/100;
}
else if(a>=750)
{
printf("7.5 percent discount\n");
discount=(float)a*7.5/100;
}
else if(a>=500)
{
printf("5 percent discount\n");
discount=(float)a*5/100;
}
else
{
printf("3 percent discount\n");
discount=(float)a*3/100;
}
printf("discount=%.2f \n",discount);
total=a-discount;
printf("amount to pay=%.2f \n",total);
getch();
}
