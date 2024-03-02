//2023111359 √÷∞°¿±
//BookApp.cpp
#include <iostream>
#include "Book.h"

using namespace std;

int main()
{
	Book book1;

	book1.setTitle("Great C++");
	book1.setAuthor("Arnold Bob");

	cout << book1.getTitle() << " - " << book1.getAuthor() << endl;

	return 0;
}