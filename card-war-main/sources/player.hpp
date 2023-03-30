#include <iostream>
#include <string>
#include "card.hpp"
#include <fstream>
#include <sstream>
#include <stdexcept>
#pragma once
namespace ariel{
    class Player{
        public:
        std::string name;
        //constuctors
        Player(){}
        Player(std::string name);
         // operations
        //  int getsize();
         int cardesTaken(); //test
         int stacksize(); //test

        //we been asked to do by the demo - i will implement them in the next task 
        //  bool empty();
	    //  //Returns true if the hand is empty, returns false otherwise
	    //  int size();
	    //  //Returns how many cards are in the hand
        //  int putFaceup();
        //  int putFacedown();
        //  int winner();
        //  Card	draw ( );
	    //  void	addPoints (int);
	    //  int 	score ();
	
        //  protected:
	    //  Card	myCards[2];
	    //  int 	myScore;
	    //  int 	removedCard;
};
    }
