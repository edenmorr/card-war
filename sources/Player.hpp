#include <iostream>
#include <string>
#include "Card.hpp"
using namespace std;
namespace ariel{
    class Player{
        string name;
        //constuctors
        Player(){
        name=null;
        }
        Player(string name);
         // operations
         int getsize();
         int cardesTaken();
         int stacksize();
         bool empty();
	     //Returns true if the hand is empty, returns false otherwise
	     int size();
	     //Returns how many cards are in the hand
         int putFaceup();
         int putFacedown();
         int winner();
         Card	draw ( );
	     void	addPoints (int);
	     int 	score ();
	

         protected:
	     Card	myCards[2];
	     int 	myScore;
	     int 	removedCard;
}

    }
