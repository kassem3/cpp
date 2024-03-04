#include<iostream>
using namespace std;

int main()
{
	//NOTE: the following values are just initial values.
	string name;
	int age=0;
	double gpa=0;
	char letter= 'a';
	bool success=true;
	
	cout<<"Enter your name:\n";
//	cin>>name>>endl;	(error)
/* endl is accepted with OUTPUT stream ONLY so the 
alterantive is \n. Note: \n can be used for output too. */
	cin>>name;
	
	
	cout<<"Enter your age:\n";
	cin>>age;
	
	cout<<"Enter your gpa:\n";
	cin>>gpa;
	
	cout<<"Enter your letter:\n";
	cin>>letter;
	
	cout<<"Are you successful? \n";
	cout<<success<<endl<<endl<<endl;
	
	cout<<"***** YOUR RESULTS *****"<<endl;
	
	cout<<"Your Name is: "<<name<<endl;
	cout<<"Your Age is: "<<age<<endl;
	cout<<"Your GPA is: "<<gpa<<endl;
	cout<<"Your Letter is: "<<letter<<endl;
	cout<<"If(Success = 1): Congratulations!"<<endl;
	cout<<"Else: Nevermind"<<endl;
	
	return 0;
}

