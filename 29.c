#include<stdio.h>
void main(){
  char ch;
  printf("Enter any character:");
  scanf("%c",&ch);
  ch=getche();
  printf("typed character:");
  putchar(ch);
}
