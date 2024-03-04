/* Write a C++ code to calculate
the average of 3 quizzes. */

#include<iostream>
#include<cmath>
using namespace std;


double cal_avg(int,int,int); //function prototype

/* Must include function parameters unless it is a void
function. The data types is enough but it is better to
also include the variable names. */

int main()
{
	int q1, q2, q3;   //3 variables declared
	double avv;
	
	cout<<"Enter 3 quiz grades: "<<endl;
	cin>>q1>>q2>>q3;  //3 numbers taken
		
	avv = cal_avg(q1,q2,q3);
	
	cout<<"Average = "<<avv;
		
	return 0;
}


double cal_avg(int q1, int q2, int q3)
{
	double avv;
	
	avv = double (q1+q2+q3)/3;
	
	return avv;
}
