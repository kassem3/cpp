// POINTERS
/* Definition: A variable that stores
the memory address of another variable.*/

#include <iostream>
using namespace std;

int main()
{
	int age=33; //33 is actually stored in one of the memory containers
				//but we see it stored in the variable age.
				//Each memory container has a unique address.
	double gpa=3.8;
	string name="John";
	
//	cout<<name; //Classic method to display name which is John

	cout<<&age<<endl;
/*We added & before the variable's name "age" to display
its address which is 33. 33 is stored in 0x6ffe00. This
weird memory address can be stored in a pointer.*/

//NOTE: We didn't store any address yet
//so we didn't declare any pointer variable.
	
	cout<<"Address of Age: "<<&age<<endl;
	cout<<"Address of GPA: "<<&gpa<<endl;
	cout<<"Address of Name: "<<&name<<endl;

	return 0;
}
