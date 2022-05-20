// IT21349010 Senavirathna P.M.H.M.
#include <iostream>
#include <cstring>
#include "Book.h"
using namespace std;

int main()
{
	Book B1;
	
	B1.AddBook();
	B1.SetAvailability();
	B1.DisplayBook();
	B1.SearchBook();

	return 0;
}
