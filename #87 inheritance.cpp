#include<iostream>
using namespace std;

class Chef	//it is called "SUPER CLASS"
{
	public:
		void makeChicken()
		{
			cout<<"The chef makes delicious chicken"<<endl;
		}
		void makeSalad()
		{
			cout<<"The chef makes salad"<<endl;
		}
		void makeSpecialDish()
		{
			cout<<"The chef makes bbq ribs"<<endl;
		}
	
};

/*In this class, the Italian Chef will inherite all the
attributes of the normal chef. So, he'll be able to cook
the same dishes a normal chef can cook.*/
class ItalianChef: public Chef	//it is called "SUB CLASS"
{	//the class is technically empty (not anymore)
	public:	//if not written, won't be able to call the func.
		void makePasta()
		{
			cout<<"The chef make pasta"<<endl;
		}
		void makeSpecialDish() //override the inherited func.
		{
			cout<<"The chef makes Pizza"<<endl;
		}
};

int main()
{
	Chef chef;
//	chef.makeChicken();
	
	ItalianChef italianChef;
//	italianChef.makeChicken();

	italianChef.makePasta(); //he can make pasta
//	chef.makePasta(); //he can't make pasta (error)
	
	chef.makeSpecialDish();
	italianChef.makeSpecialDish();
	
	return 0;
}

