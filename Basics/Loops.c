#include<stdio.h>
int main(){
  int a;
  //for loop is given below
  for(a=1;a<6;a++){//Will print numbers from 1 till 5 ,, "a++" is used post-increment.
    printf("%d \n",a);
    }
  //while loop given below
  while(a<7,a++){//will print 2 forever because in while loop if the condition is true once then it does run the whole statement forever
    printf("%d \n",a);
    }
  //Do-While loop given below
  do {
        printf("%d\n", i); // Code block to execute
        i++;               // Increment (Update expression)
    } while (i <= 5);      // Condition checked at the end
}
