// Implement a C program to display the memory size of different data types.


#include <stdio.h>
int main(){
  printf("Size of int: %lu bytes\n", sizeof(int));
  printf("Size of float: %lu bytes\n", sizeof(float));
  printf("Size of char: %lu bytes\n", sizeof(char));
  printf("Size of double: %lu bytes\n", sizeof(double));
  return 0;
}
