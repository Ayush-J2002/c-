#include<stdio.h> 
#include<conio.h>
 void main() { 
int a=0,b=1,c,i,n; clrscr(); 
printf("Enter the value of N element "); 
scanf("%d",&n);
 if(n==0)
 printf("%d\n",a); 
else 
printf("%d\t%d\t",a,b);
 for(i=2;i<=n;i++) 
{ c=a+b;
 printf("%d\t",c); 
a=b; b=c; }
 getch(); 
} 
