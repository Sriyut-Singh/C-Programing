//Develop a program that takes an integer as input and prints its octal and hexadecimal equivalent.


#include <stdio.h>
int main(){
  int num;
  printf("Enter an integer: ");
  scanf("%d", &num);
  printf("Octal = %o\n", num);
  printf("Hexadecimal = %X\n", num);
  return 0;
}
