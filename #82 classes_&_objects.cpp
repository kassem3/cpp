//CLASSES & OBJECTS

/* A class is a new datatype that you can create!
A class is usually a complex datatype.
A class is the specification\blueprint\template of a datatype.

An object is an actual instance of that class. For our case
here, the object is the actual book. */

#include<iostream>
using namespace std;

class Book
{
	public:			//now, let's add some attributes
		string title;
		string author;
		int pages;
};

int main()
{
	Book book1;	//created an object
	book1.title= "Harry Potter"; //now we fill its attributes
	book1.author= "JK Rowling";
	book1.pages= 700;
	
	Book book2;
	book2.title= "Clean Code";
	book2.author= "Robert Martin";
	book2.pages= 120;
	book2.pages= 126; //updated no. of pages

	cout<<book1.title<<endl;

	cout<<book2.pages<<endl;
	
	return 0;
}

