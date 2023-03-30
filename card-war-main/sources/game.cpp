#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include "game.hpp"
namespace ariel{

Game::Game(Player p1, Player p2) : p1(p1), p2(p2) {}
void Game::playAll(){}
void Game::printWiner(){}
void Game::printLog(){}
void Game::printLastTurn(){}
void Game::printStats(){}
void Game::printPlayerStats(){}
void Game::playTurn(){}
}
