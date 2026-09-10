#include <stdio.h>

int main() {
    // "%d" is always added in the code when we want to print an integer in the output
    printf("Multipilication of 2 and 3: %d", 2*3);//Output:6
    
    printf("Addition of 2 and 3: %d", 2+3);//Output:5
  
    printf("Subtraction of 2 and 3: %d", 3-2);//Output:1
  
    printf("Division of 2 and 3: %d", 3/2); // In division it gives the output same as in python , integer output until float is not mentioned
    // So this will give an output "1".As it can't gie th eoutput "1.5" .
  
    return 0;
}
