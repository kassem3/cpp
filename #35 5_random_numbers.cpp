/* Q) Display 5 random numbers.
Hint: Use rand() and srand() functions.*/


#include<iostream>
#include<cstdlib> //for rand() & srand()
#include<ctime> //for seeding srand() with current time
using namespace std;

int main()
{
	srand(time(NULL));
	
	for(int i=1; i<=5; i++)
	cout<<rand()<<endl;


	return 0;
}
