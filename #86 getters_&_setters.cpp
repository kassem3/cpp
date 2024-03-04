//GETTERS & SETTERS
/*Allows us to enforce valid inputs, for example: we should'nt
be able to enter "Cat" or any random text as a rating for a
movie, there must be certain official ratings that we should
only use.*/

#include<iostream>
using namespace std;

class Movie
{
	private: //only codes inside its class can access it like constructors
		string rating;
	public: //any code outside from this class can access its objects
		string title;
		string director;	
		Movie(string aTitle, string aDirector, string aRating)
		{
			title= aTitle;
			director= aDirector;
		//	rating= aRating;
		//Now, instead of using the above LOC, we'll use:
			setRating(aRating);
		}
		
		/*Whenever we want to give a value to "rating", it
		must now pass through this "setRating" function
		first. */
		void setRating(string aRating) //setup rules for valid ratings
		{
			if(aRating=="G" || aRating=="PG" || aRating=="PG" ||
			 aRating=="PG-13" || aRating=="R" || aRating=="NR")
			 {
			 	rating= aRating;
			 }
			 else
			 {
			 	rating="NR";
			 }
		}
		
		string getRating() //work around in order to access the "rating"
		//REMEMBER: This is a public function
		{
			return rating;
		}
};

int main()
{
	Movie avengers("The Avengers", "Joss Whedon", "PG-13"); //if changed to PG-99 for ex. it will return "NR"
	
	avengers.setRating("Snake"); //invalid rating so will be set to "NR"
	
	//We're able to print the rating when object "rating" is public
//	cout<<avengers.rating<<endl;

	cout<<avengers.getRating();
	
	return 0;
}

