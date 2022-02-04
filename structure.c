#include <stdio.h>
#include <string.h>

struct Books
{
  char title[50];
  char author[50];
  char subject[50];
  int book_id;
};

int main()
{
  struct Books Book1;
  struct Books Book2;

  strcpy(Book1.title, "C Programming");
  strcpy(Book1.author, "Nuha Ali");
  strcpy(Book1.subject, "C Programming Tutorial");
  Book1.book_id = 6495407;

  strcpy(Book2.title, "Telecom Billing");
  strcpy(Book2.author, "Zara Ali");
  strcpy(Book2.subject, "Telecom Billing Tuttorial");
  Book1.book_id = 6495700;

  printf("Book 1 title is: %s\n", Book1.title);
  printf("Book 1 author is: %s\n", Book1.author);
  printf("Book 1 subject is: %s\n", Book1.subject);
  printf("Book 1 id is %d\n", Book1.book_id);

  printf("Book 2 title is %s\n", Book2.title);
  printf("Book 2 author is: %s\n", Book2.author);
  printf("Book 2 subject is: %s\n", Book2.subject);
  printf("Book 2 id is : %d\n", Book2.book_id);

  return 0;
}