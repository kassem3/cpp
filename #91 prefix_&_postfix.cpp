//PREFIX & POSTFIX

// increment z++ , decrement z-- , NOTE: add\subt. by 1 only

//    prefix ++z , postfix z++   , NOTE: same
//    NOTE: also works with - sign.


#include<iostream>
using namespace std;

int main()
{
	int x=1;
//	cout<<x+3<<endl;	//1+3= 4 , value was not stored
//	cout<<x<<endl;		//1
	
	//If we want to increase x's value and store it:
	x++;				//1+1= 2
	cout<<x<<endl;		//2
	
	x--;				//2-1= 1
	cout<<x<<endl<<endl;//1
	
	
	int y=6;
	cout<<y++<<endl;	//6+1= 7 is not the answer!
	/*The compiler will read y first then display it as 6
	then read the ++ then store it as the new y value. If
	you don't want to face this problem and display 7 from
	the first time, you need to increment y as y++ before
	using the cout object OR use prefix to make the compiler
	read ++ first. Correct Answer= 6. */
	
	cout<<y<<endl<<endl;//6 is not the answer!
	/* As y was incremented above, the compiler will update
	its value to 7, the increment\decrement works even within
	the cout object. Correct Answer= 7. */
	
	
	int z=5;
	cout<<z--<<endl;	//5 , value updated to 5-1 = 4
	cout<<z<<endl<<endl;//4 , new value
	
	
	int p=10;
	cout<<++p<<endl;	//10+1= 11 , instant display & storing
	cout<<--p<<endl;	//11-1= 10
	cout<<p<<endl;		//10 , last value stored
	
	
	return 0;
}

