//CONSTRUCTOR FUNCTIONS

#include<iostream>
using namespace std;

class Book
{
	public:
		string title;
		string author;
		int pages;
		Book(string name)
		/* This is a Constructor function that's gonna be 
		called everytime we create a Book object. It also
		accepts parameters inside the round brackets. */
		{
//			cout<<"Creating Object"<<endl; //display "Creating Object" for all objects "Book".
			cout<<name<<endl; //display name of all objects "Book".
		}
};

int main()
{
	Book book1("HARRY POTTER");
	book1.title= "Harry Potter";
	book1.author= "JK Rowling";
	book1.pages= 700;
	
	Book book2("CLEAN CODE");
	book2.title= "Clean Code";
	book2.author= "Robert Martin";
	book2.pages= 120;
	
//	cout<<book1.pages<<endl;
//	cout<<book2.author;

	return 0;
}

