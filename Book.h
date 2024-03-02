//Book.h
#include <iostream>
using namespace std;

class Book {
private:
	string title;
	string author;
public:
	void setTitle(string);
	void setAuthor(string);
	string getTitle();
	string getAuthor();
};