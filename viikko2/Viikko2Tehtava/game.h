#ifndef GAME_H
#define GAME_H
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <chrono>
#include <thread>


using namespace std;

class Game
{
public:
    Game(int);
    ~Game();
    void play();

private:
    void printGameResult();
    int maxNumber;
    int playerGuess;
    int randomNumber;
    int numOfGuesses;

};

#endif // GAME_H
