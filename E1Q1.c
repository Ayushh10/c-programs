#include<stdio.h>
#include<conio.h>
void main()
{
 int s1,s2,s3,s4,s5,sum;
 float per;
 printf("enter the marks of five subjedts ");
 scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
 sum=(s1+s2+s3+s4+s5);
 per=sum/5;
 printf("PERCENTAGE is %f",per);
 printf("SUM is %d",sum);
 getch();
 }
