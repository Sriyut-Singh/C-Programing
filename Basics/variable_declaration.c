#include <stdio.h>
int main(){
  int a; // DataType of the declared variable decision.
  // There are 4 types of datatypes used mainly :- Integer(int),Decimal(float),String(char),Double{Used to store high precision data}(double)
  a=7;
  
  float b;// Float can be used till 7 digits.
  b=7.77;

  char c='C';// It stores only one character.

  double d;// Doulbe can be used for upto 17 significant digits.
  d = 3.14159265359;
  
// Assigning the value of the variable.
  printf("%d",a);// Printing the varivale declared.  
  printf("\n");//  it is used for a new line shift
  printf("%f",b); // For calling float we need "%f".
  printf("\n");
  printf("%c",c); // For calling char we need "%c".
  printf("\n");
  printf("%.10lf",d); // For calling double we need "%lf".

  return 0;
}
// diffrent data-types have diffrent functions

// int:- it is used to store integers.
// float:- used for storing of decimal values.
// char:- used to store alphabets and letters.
// double :- used for storing all kind of datatypes with high precision.
