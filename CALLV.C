#include<stdio.h> 
#include<conio.h>
 void swap(int i,int j) 
{ 
int temp=i;i=j;j=temp; 
} void main() {
 int a,b; clrscr();
 printf("enter the value ");
 scanf("%d%d",&a,&b); 
swap(a,b); 
printf("The value after swap is %d\n%d",a,b);
 getch(); 
} 
