//CONSTRUCTOR FUNCTIONS 2

#include<iostream>
using namespace std;

class Book
{
	public:
		string title;
		string author;
		int pages;
		Book(string aTitle, string aAuthor, int aPages) //a is for argument
		{
			title=aTitle; //will save much time & LOC
			author=aAuthor;
			pages=aPages;
		}
		//we can create multiple constructors
		Book() //this constructor won't take any parameters
		{
			title= "NO TITLE";
			author= "NO AUTHOR";
			pages= 0;
		}
};

int main()
{
	Book book1("Harry Potter", "JK Rowling", 700);
	book1.title="Garry Botter"; //updated name
	
	Book book2("Clean Code", "Robert Martin", 120);
	
	Book book3;

	cout<<book1.title<<endl;
	cout<<book2.pages<<endl;
	cout<<book3.author<<endl;

	return 0;
}

