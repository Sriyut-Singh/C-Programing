//Implement a program to find the sum of two numbers using Call by Reference.

#include <stdio.h>
void sum(int *a, int *b){
  int result = *a + *b;
  printf("The sum of the two numbers is: %d\n", result);
}
int main(){
  int x = 5, y = 7;
  sum(&x, &y);
  return 0;
}
