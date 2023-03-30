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
 
TEST_CASE("Test number 5: ") {//"cheack players' cards after 10 turns"
    Player p1("Alice");
    Player p2("Bob");

    Game game(p1, p2);
    for (int i = 0; i < 10; i++) {
        game.playTurn();
    }
    CHECK((p1.stacksize() == 16) || (p2.stacksize() == 16)); 
    CHECK((p1.stacksize() == 36) || (p2.stacksize() == 36)); 
}

   TEST_CASE("Test number 6: ") {//"cheack stacksize after 2 turns 
    Player p1("Alice");
    Player p2("Bob");
    Game game(p1, p2);
    int stacksize1 = game.player1.stacksize();
    int stacksize2 = game.player2.stacksize();
        game.playTurn();
    CHECK(game.player1.stacksize() == (stacksize1 - 1) || game.player2.stacksize() == (stacksize2 - 1) );
        game.playTurn();
    CHECK(game.player1.stacksize() == (stacksize1 - 1) || game.player2.stacksize() == (stacksize2 - 1) );
   }


   TEST_CASE("Test number 6: ") {//"cheack stacksize after 5 turns (what that raight in the demo)
    Player p1("Alice");
    Player p2("Bob");
    Game game(p1, p2);
    for (int i = 0; i < 5; i++) {
        game.playTurn();
    }
    CHECK(game.player1.stacksize() < 21 || game.player1.stacksize() == 21 );
    CHECK(game.player2.stacksize() < 21 || game.player2.stacksize() == 21 );
   }
   TEST_CASE("Test number 7: ") {
    Player p1("Alice");
    Player p2("Bob");
    Game game(p1, p2);
    CHECK_NOTHROW(game.playAll());
    CHECK_NOTHROW(game.playTurn());
    CHECK_NOTHROW(game.printWiner());
    CHECK_NOTHROW(game.printLog());
    CHECK_NOTHROW(game.printLastTurn());
    CHECK_NOTHROW(game.printStats());
    CHECK_NOTHROW(p1.cardesTaken());
    CHECK_NOTHROW(p2.cardesTaken());
    CHECK_NOTHROW(p1.stacksize());
    CHECK_NOTHROW(p2.stacksize());
   }
