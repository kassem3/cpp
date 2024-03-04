#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int index=1;	/* if index=6 the loop wouldn't execute except with do while
					loop where 6 will be executed once. */
	
	while(index<=5) /* as long as the condition the rounded brackets is true, the
					loop will keep going. */
	{
		cout<<index<<endl;
		
		index++;	/* to increment the index. Without this code, the loop will
					run infinitely. */
	}
	
/* for a do while loop, the code is executed firstly then the condition
will be checked unlike while loop where the condition is checked first.
Not recommended for beginners. */	
	
	return 0;
}
