#include<stdio.h>
int main(){
  if(5>4){
    printf("IF");}
  else if(3<7){
    printf("ELSE-IF");}
  else{
    printf("ELSE");}
  return 0;
}


// Test-1:- IF would be printed first .
// Test-2:- ELSE-IF would be printed if the if condintion is changed and gives false and the conditon output.{if(5>4)----> if(5>7)}
// Test-3:- ELSE would be printed if both the conditon are taken to be false.{after changing if statement {else if(3<7)--------->else if(9<7)}
