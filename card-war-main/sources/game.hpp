#pragma once
#include <iostream>
#include "player.hpp"
namespace ariel{
    class Game{
    public:
    Player p1;
    Player p2;
    
        public :
        //constrcturs
        Game();
        Game(Player p1, Player p2);
        // operations
        // Card draw ( );
        void playAll();
        void printWiner();
        void printLog();
        void printStats();
        void printLastTurn();
        void playTurn();
        void printPlayerStats();
    };
}