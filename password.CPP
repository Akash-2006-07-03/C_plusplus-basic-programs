#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
clrscr();
char a[10];
int i=0,j,s=0,c=0,n=0,sc=0;
puts ("enter ur passwor");
gets(a);
while (a[i]!='\0')
{
i++;
}
if(i>=5 && i<=10)
{
for (j=0;j<i;j++)
{
	if(a[j]>=97 && a[j]<=122)
	s++;
	else if (a[j]>=65 && a[j]<=90)
	c++;
	else if (a[j]>=48 && a[j]<=57)
	n++;
	else
	sc++;
}
if (s!=0 && c!=0 && n!=0 && sc!=0)
puts("succesful");
if (s==0) printf("enter one small char. \n");
if (c==0) printf("enter one capital char.\n");
if (n==0) printf("enter one no. \n");
if (sc==0) printf("enter special char.\n");
}
else
printf("please enter character 5 to 10 char.");
getch();
}
