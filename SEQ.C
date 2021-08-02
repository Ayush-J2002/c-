#include<stdio.h> 
#include<conio.h>
 #include<math.h>
 void main() 
{ 
 int n,m,sum=0,i=1,term;  clrscr(); 
 printf("Enter the power of series  ");  scanf("%d",&n); 
 printf("Enter the last no. of series  "); 
 scanf("%d",&m); 
 while(i<=m) 
 { 
  term=pow(i,n); 
  sum=sum+term; 
  i++; 
 } 
 printf("The sum of term is %d",sum); 
 getch(); 
} 
