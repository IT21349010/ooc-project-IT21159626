//IT21159626 Basnayake B R C K
#include <iostream>
#include "Book.h"
#include "Librarian.h"
#include <cstring>
#define SIZE 10
using namespace std;
//implementation of methods

//default constructor
Librarian::Librarian(){
    strcpy(username,"");
    strcpy(password,"");
    strcpy(libID,"");
}

//overloaded constructor
Librarian::Librarian(char *name,char *pw, char *ID){
    strcpy(username,name);
    strcpy(password,pw);
    strcpy(libID,ID);
}
//implemetation of methods
void Librarian::issueBook(Book *B){
    strcpy(book,B);
}

void Librarian::displayissueBook(){
 
}

void Librarian::updateBook(){
 
}
void Librarian::verifyMember(){
 
}

void Librarian::checkStatus(){

}
void Librarian::deleteBook(){

}
//destructor
Librarian::~Librarian(){
  cout<<"Destructor for Librarian class"<<endl;
}

