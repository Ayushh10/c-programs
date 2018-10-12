#include<stdio.h>
#include<conio.h>
void main()
{
int N,y,n,m,w,d;
printf("enter total no. of days \n");
scanf("%d", &N);
y=N/365;
n=N%365;
m=n/12;
w=(n%12)/7;
d=(n%12)%7;
printf("years: %d \n", y);
printf("months %d \n", m);
printf("weeks %d \n", w);
printf("days %d \n", d);
getch();
}
