#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n,sum=0,d,x;
printf("enter the value \n");
scanf("%d",&n);
x=n;
while (n>0)
{
d=n%10;
sum=sum+d*d*d;
n=n/10;
}
printf("sum=%d\n",sum);
if(sum==x)
printf("armstrong no.");
else
printf("not a armstrong no.");
getch();
}