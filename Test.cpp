// #include "player.hpp"
// #include "Game.hpp"
#include "sources/player.hpp"
#include "sources/game.hpp"
#include "sources/card.hpp"
#include "doctest.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>

    TEST_CASE("Test number 1: ") { //end of the game no cards for the players
    Player p1("Alice");
    Player p2("Bob");
    Game game(p1, p2);
    game.playAll();
    CHECK(p1.stacksize() == 0);
    CHECK(p2.stacksize() == 0);
    CHECK_EQ((p1.stacksize() == 0 || p2.stacksize() == 0)); 
}
    TEST_CASE("Test number 2: ") { //at the begining of the game both have the same amount of cards check players' stacks to be of size 26 : 

    Player p1("Alice");
    Player p2("Bob");
    Game game(p1, p2);
    CHECK(p1.stacksize() == 26);
    CHECK(p2.stacksize() == 26);
    CHECK_EQ(p1.stacksize(), p2.stacksize());
    }
   TEST_CASE("Test number 3: ") { //at the begining of the game both have the same amount of cards
    Player p1("Alice");
    Player p2("Bob");
    Game game(p1,p2); 
    CHECK_EQ(p1.stacksize(), p2.stacksize());
    }
TEST_CASE("Test number 4: ") { //cheacking the amount of card the winning player have and the amonut the other player have 
    Player p1("Alice");
    Player p2("Bob");
    Game game(p1, p2);
    CHECK(p1.cardesTaken() == 52 );
    CHECK(p2.stacksize() == 0);
}
   



