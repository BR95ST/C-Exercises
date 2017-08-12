#include<stdio.h>
 
int main(void)
{
  int numDec;
  puts("Enter a number decimal");
  scanf("%d",&numDec);
  printf("Hexadecimal %x, Octal %o\n",numDec,numDec);
 
  return 0;
}
