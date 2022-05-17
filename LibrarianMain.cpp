//uni directional association between book and librarian
#include <iostream>
#include "Librarian.h"
#include "Book.h"
#include <cstring>
#define SIZE 10
using namespace std;
int main() {

  //creation of dynamic objects
  Librarian *L1;
  Librarian *L2;
  
  Book *B1;
  Book *B2;

  L1 = new Librarian(); //default constructor
  L2 = new Librarian("NimaliPerera","neeper","LIB01");//overloaded constructor

  B1 = new Book(); //default constructor
  B2 = new Book();
  
  //calling the methods
  L1-> issueBook();
  L2-> issueBook();
  
  cout<< "Display Book Issues" <<endl;
  L1-> displayissueBook();
  L2-> displayissueBook();

  L1-> updateBook();
  L2-> updateBook();
  
  L1-> verifyMember();
  L2-> verifyMember();

  L1-> checkStatus();
  L2-> checkStatus();
  
  L1-> deleteBook();
  L2-> deletebook();

  //deleting the created objects of class librarian
  delete L1;
  delete L2;
  
  return 0;
}
