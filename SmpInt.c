#include<stdio.h>
#include<conio.h>
void main()
{
 float P,A,SI;
 int r,t;
 printf("enter principal \n");
 scanf("%f", &P);
 printf("enter rate and time \n");
 scanf("%d %d", &r, &t);
 SI=(P*r*t)/100;
 printf("SI is: %f \n", SI);
 A=P+SI;
 printf("Amount is: %f", A);
 getch();
}
