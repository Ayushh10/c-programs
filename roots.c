#include<stdio.h>
#include<conio.h>
 void main()
{
 int a,b,c;
 float r1,r2;
 printf("enter value of a \n");
 scanf("%d", &a);
 printf("enter value of b \n");
 scanf("%d", &b);
 printf("enter value of c \n");
 scanf("%d", &c);
 printf("the entered equation is:");
 printf("%dx^2",a);
 printf("%dx+",b);
 printf("%d \n",c);
 printf("the required roots are: \n");
 r1=((-b+sqrt(4*a*c)))/2*a;
 r2=((-b-sqrt(4*a*c)))/2*a;
 printf("roots are: \n");
 printf("%f , %f", r1, r2);
 getch();
}
