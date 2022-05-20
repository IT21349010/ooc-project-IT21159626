// IT21349010 Senavirathna P.M.H.M.
#include <iostream>
#include <cstring>
#include "Book.h"
using namespace std;

//Implementation
//Default constructor
Book::Book()
{
	ISBNno = 0;
	price = 0;
	publisher = "";
	quantity = 0;	
}
void Book::SetBookDetails(char ID[10],char name[100],char author[100],int isbnNo,float price,int qty,string publisher,string Availability)
{
	bookID[10] = ID[10];
	title[100] = name[100];
	author [100]= author[100];
	ISBNno = isbnNo;
	price = price;
	publisher = publisher;
	quantity = qty;
	availability = Availability;
}
void Book::AddBook()
{
	
	system("cls");
	cout<<"Book Title   : ";
	gets(title);
	cout<<"Author       : ";
	gets(author);
	cout<<"Book ID      : ";
	cin>>bookID;
	cout<<"ISBN number  : ";
	cin>>ISBNno;
	cout<<"Publisher    : ";
	cin>>publisher;
	cout<<"Price        : ";
	cin>>price;
	cout<<"Quantity     : ";
	cin>>quantity;	
	system("cls");	
}
void Book::SetAvailability()
{
	
}

void Book::DisplayBook()
{
	int i;
	cout<<"Title of the book : " <<title<<endl
		<<"Author            : " <<author<<endl
		<<"Book ID           : " <<bookID<<endl
		<<"ISBN no           : " <<ISBNno<<endl
		<<"Publisher         : " <<publisher<<endl
		<<"Price             : " <<price<<endl
		<<"Quantity          : " <<quantity<<endl
		<<"Status            : " <<availability<<endl;
}

void Book::SearchBook()
{
	
}



