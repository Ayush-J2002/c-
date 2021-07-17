#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
float a,b,c,r,r1,r2,d;
clrscr():
printf("\nenter the co-efficients\n'");
scanf("%f%f%f",&a,&b,&c);
d=(b*b)-(4*a*c);
printf("\nthe value of d is %f",d);
if(d<0)
printf("\nthe root are not real");
if(d>0)
{
r1=(-b+sqrt(d))/2*a);
r2=(-b-sqrt(d))/2*a);
printf("\n the first root is %f",r1);
printf(:"\n the second