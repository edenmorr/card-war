#include <iostream>
using namespace std;
#include "Player.hpp"
class Game{
    private:
   Player& p1;
   Player& p2;
 
    public :
    //constrcturs
    Game();
    Game(Player& p1,Player& p2);
    // operations
    Card draw ( );
    int playAll();
    void printWiner();
    void printLog();
    void printStats();
    void printLastTurn();
    int playTurn();

}