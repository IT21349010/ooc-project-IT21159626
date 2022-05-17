#include "Book.h"
#define SIZE 10
class Librarian{
    private:
    	char username[20];
    	char password[10];
    	char libID[5];
        Book *book[SIZE];
    public:
       Librarian();
       Librarian(char *name,char *pw,char *ID);
       void issueBook(Book *B);
       void displayissueBook();
       void updateBook();
       void verifyMember();
       void checkStatus();
       void deleteBook();
       ~Librarian();
};

