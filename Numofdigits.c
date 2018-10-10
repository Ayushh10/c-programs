#include<stdio.h>
#include<conio.h>
void main()
{
int a,f,s,q,v,t;
printf("enter a 3-digit no. \n");
scanf("%d", &a);
q=a/10;
t=a%10;
v=q/10;
s=q%10;
f=v;
printf("first digit is: %d \n", f);
printf("second digit is: %d \n", s);
printf("third digit is: %d", t);
getch();
}
