#include<stdio.h> #include<conio.h>
 void main() { 
int a[11],b,i; float sum=0,avg; clrscr(); 
printf("Enter the value of i(1 to 11) "); 
scanf("%d",&i); for(b=1;b<=i;b++) 
{ printf("Enter the values "); scanf("%d",&a[i]); 
sum=sum+a[i]; 
} 
printf("The sum of the values is %f\n",sum); avg=sum/i; 
printf("The average of the values is %f",avg); getch(); 
} 
