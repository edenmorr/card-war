#include <iostream>
#include <string>
using namespace std;
namespace ariel{
    class Card{
        public:
    enum suits {diamond, club, heart, spade};
	// constructors
	Card	( );            // initialize a card with default values
	Card	(String deck, int value, int rank);   // initialize a card with given values

      int rank;     // hold rank of card
	  String  deck; // hold deck of card           
      int value;

        void shuffle ();
        String getSuit() const;
        int getRank() const;
        int getValue() const;

    }
}
