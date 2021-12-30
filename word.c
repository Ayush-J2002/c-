//Add the length of the middle letter between the first and last letters of the string longer than 10
#include <stdio.h>
#include <string.h>
 #define N 110
 int main(){
  int n,i,k;
  char s[N][N];
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%s",s[i]);
  for(i=0;i<n;i++)
  {    k=strlen(s[i]);
      if(k>10) printf("%c%d%c\n",s[i][0],k-2,s[i][k-1]);
      else  printf("%s\n",s[i]);
  }
 return 0;
 }