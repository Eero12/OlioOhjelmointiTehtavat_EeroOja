#include "game.h"


Game::Game(int mn)
{
    maxNumber = mn;
    cout << "maxnumber is:" << maxNumber << endl;
}

Game::~Game()
{
    cout << "DESTRUCTION!!!" << endl;
    cout << "end game!" << endl;

}

void Game::play()
{
    cout << "game play" << endl;
        srand(time(NULL));
        int rndnumber = rand() % maxNumber;
        cout <<"Number is between 1-"<< maxNumber << endl;
        while (playerGuess != rndnumber) {
            cin >> playerGuess;
            if(playerGuess < rndnumber){
                numOfGuesses++;
                cout << "Number is bigger " << endl;
            }
            else if(playerGuess > rndnumber){
                cout << "Number is smaller" << endl;
                numOfGuesses++;
            }
        }
        system("cls");
        cout << "printing game result...... " << endl;
        this_thread::sleep_for(chrono::seconds(2));
        cout << " " << endl;
        cout << "Correct number was: " << rndnumber<< endl;
        printGameResult();
}



void Game::printGameResult()
{
    cout <<"Number of guesses: " <<numOfGuesses << endl;
    cout << " " << endl;
}
