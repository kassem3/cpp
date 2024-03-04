#include <iostream>
using namespace std;

int main()
{
	string phrase = "Giraffe Academy";	//index position always starts from 0
	
/*	cout<<phrase.length(); */		//output is 15 [space included]

/*	cout<<phrase[0]; */		//output is the 1st letter
	
/*	phrase[0] = 'B';
/*	cout<<phrase; */		//output is Birafffe Academy
	
/*	cout<<phrase.find("Academy", 0); */
/*	cout<<phrase.find("ffe"); */

	cout<<phrase.substr(8, 3); //allows us to take a subsection of the string
	// 8 is the index num, 3 is the num of characters to be displayed
	
	return 0;
}
