/*Create a program that takes in the weight of an
item and then calculates how much that item would weigh on Mars.*/
#include <iostream>
using namespace std;

int main()
{

  double EarthWei=0, MarsWei=0;

  cout<<"Enter the weight of the item: ";
  cin>>EarthWei;

  MarsWei = (EarthWei/9.81) * 3.2 ;

  cout<<"The weight on Mars is: "<<MarsWei<<endl;

}
