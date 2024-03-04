//OBJECT FUNCTIONS
/*Also referred to as "instance functions". It is simply a
function that we can put inside of our classes. */

#include<iostream>
using namespace std;

class Student
{
	public:
		string name;
		string major;
		double gpa;
		//the below LOC is a constructor.
		Student(string aName, string aMajor, double aGpa)
		{
			name= aName;
			major= aMajor;
			gpa= aGpa;
		}
/* We'll create a function in the Student class which each of
the objects could use to tell if they're on the Honor Roll
or not. */
		bool hasHonors()
		/* what's cool about doing this is that the above
		function is gonna be using different information
		depending on which object is calling it. So, when
		Jim's object is calling it the gpa compared will be
		Jim's gpa and same for the rest of the objects.*/
		{
			if(gpa>=3.5)
			{
				return true;
			}
			return false;
		}
};

int main()
{
	Student student1("Jim", "Business", 2.4);
	Student student2("Pablo", "Art", 3.6);
		
	cout<<student1.hasHonors()<<endl;
	cout<<student2.hasHonors()<<endl;
	
	return 0;
}

