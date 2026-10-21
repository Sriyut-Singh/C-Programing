//Define a Book structure with fields title, author, price, and pages. Accept details for 3 books and display them.


#include <stdio.h>
struct Book{
char title[50];
char author[50];
float price;
int pages;
};
int main(){
  struct Book b[3];
  for (int i = 0; i < 3; i++){
    printf("Enter details for Book %d:\n", i + 1);
    printf("Title: ");
    scanf(" %[^\n]", b[i].title);
    printf("Author: ");
    scanf(" %[^\n]", b[i].author);
    printf("Price: ");
    scanf("%f", &b[i].price);
    printf("Pages: ");
    scanf("%d", &b[i].pages);
  }
  printf("\nBook Details:\n");
  for (int i = 0; i < 3; i++){
    printf("Book %d: %s by %s | $%.2f | %d pages\n", i + 1, b[i].title, b[i].author,b[i].price, b[i].pages);
  }
  return 0;
}
