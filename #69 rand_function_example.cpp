#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
double func (int, int);

int main()
{
	srand(time(NULL));
	int n1, n2;
	
	cout << "\n Get the first number : ";
	cin >> n1;
	cout << "\n Get the second number : ";
	cin >> n2;
	
	cout << func(n1, n2);
	return 0;
}

double func(int b, int a)
{
	double result=0;

	result = b + rand() % (a+50);
	
	return result;
}

