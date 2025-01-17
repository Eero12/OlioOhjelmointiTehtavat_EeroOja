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
        randomNumber= rand() % maxNumber;
        cout <<"Number is between 1-"<< maxNumber << endl;
        while (playerGuess != randomNumber) {
            cin >> playerGuess;
            if(playerGuess < randomNumber){
                numOfGuesses++;
                cout << "Number is bigger " << endl;
            }
            else if(playerGuess > randomNumber){
                cout << "Number is smaller" << endl;
                numOfGuesses++;
            }
        }
        printGameResult();
}



void Game::printGameResult()
{
    system("cls");
    cout << "printing game result...... " << endl;
    this_thread::sleep_for(chrono::seconds(2));
    cout << " " << endl;
    cout << "Correct number was: " << randomNumber<< endl;
    cout <<"Number of guesses: " <<numOfGuesses << endl;
    cout << " " << endl;
}
