// IT21349010 Senavirathna P.M.H.M.
#include <iostream>
#include <cstring>
using namespace std;

class Book{
		char bookID[10];
		char title[100];
		char author[100];
		int ISBNno;
		float price;
		int quantity;
		string publisher;
		string availability;
	public: 
		Book();
		void SetBookDetails(char ID[10],char name[100],char author[100],int isbnNo,float price,int qty,string publisher,string availability);
		void AddBook();
		void SetAvailability();
		void DisplayBook();
		void SearchBook();
		
};




	



