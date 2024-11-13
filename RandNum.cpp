#include "RandNum.hpp"
#include <iostream>
#include <ctime>

using namespace std;

NumberGuessingGame::NumberGuessingGame() {
    // Initializes the NumberGuessingGame object with wins and losses set to 0.
    wins = 0;
    losses = 0;
}

int NumberGuessingGame::getRandomNumber() {
    // Returns the currently set random number.
    return randNum;
}

void NumberGuessingGame::setRandomNumber(int num) {
    // Sets the random number to the provided num.
    randNum = num;
}

int NumberGuessingGame::getWins() {
    // Returns the current number of wins.
    return wins;
}

void NumberGuessingGame::setWins(int num) {
    // Sets the number of wins to the provided num.
    wins = num;
}

int NumberGuessingGame::getLosses() {
    // Returns the current number of losses.
    return losses;
}

void NumberGuessingGame::setLosses(int num) {
    // Sets the number of losses to the provided num.
    losses = num;
}

void NumberGuessingGame::Game() {
    // Postcondition: Runs a number guessing game where the user has 20 attempts to guess the random number.
  
    int number = rand() % 100 + 1;
    setRandomNumber(number);
    int attempts = 1;
    int guess;
    cout << "Guess a number (1-100): ";

    while (attempts < 21) {
        
        cout << "\nGuess #" << attempts << ":  ";
        cin >> guess;
        attempts++;
    // Will not take the any answer below 0 and above 100
if (guess > 100){
    cout << "Your guess is invaild" << endl;
}
else if (guess < 0){
    cout << "Your guess is invailid" << endl;
}

        if (guess < getRandomNumber()) {    // Provide feedback for a low guess
            switch (rand() % 9) {
                case 0:
                        cout << "Your guess is too low" << endl;
                        break;
                case 1:
                        cout << "Think of a higher number" << endl;
                        break;
                case 2:
                        cout << "Still too low" << endl;
                        break;
                case 3:
                        cout << "I said a higher number than that" << endl;
                        break;
                case 4:
                        cout << "TOO LOW!" << endl;
                        break;
                case 5:
                        cout << "C'mon a little higher, I thought you were a good guesser" << endl;
                        break;
                case 6:
                        cout << "Take a hint, it's higher" << endl;
                        break;
                case 7:
                        cout << "Enter a larger number than that" << endl;
                        break;
                case 8:
                        cout << "Seriously, bigger than that number" << endl;
                        break;
                case 9:
                        cout << "Your guess is wayyy to low" << endl;
                        break;
                
            }
        }

        else if (guess > getRandomNumber()) {      // Provide feedback for a high guess.
            switch (rand() % 9) {
                case 0:
                        cout << "Your guess is too high" << endl;
                        break;
                case 1:
                        cout << "Think of a lower number" << endl;
                        break;
                case 2:
                        cout << "Still way to high" << endl;
                        break;
                case 3:
                        cout << "I said a lower" << endl;
                        break;
                case 4:
                        cout << "TOO HIGH!" << endl;
                        break;
                case 5:
                        cout << "C'mon a little lower" << endl;
                        break;
                case 6:
                        cout << "Take a hint, it's lower" << endl;
                        break;
                case 7:
                        cout << "Enter a lower number than that" << endl;
                        break;
                case 8:
                        cout << "Seriously, smaller than that" << endl;
                        break;
                case 9:
                        cout << "Your guess was as high as the sky" << endl;
                    break;
                
            }
        }

        else {
            attempts = 21;
            switch (rand() % 9) {      // Provide feedback for a correct guess, update wins, and break out of the loop.
                case 0:
                        cout << "Congratulations you guessed it" << endl;
                        break;
                case 1:
                        cout << "DING DING DING YOU GUESSED IT" << endl;
                        break;
                case 2:
                        cout << "WINNA WINNA CHICKEN DINNA" << endl;
                        break;
                case 3:
                        cout << "Finally" << endl;
                        break;
                case 4:
                        cout << "Took you long enough" << endl;
                        break;
                case 5:
                        cout << "You're welcome for all of the hints..." << endl;
                        break;
                case 6:
                        cout << "I guided you to that answer" << endl;
                        break;
                case 7:
                        cout << "WAY. TO. GO. " << endl;
                        break;
                case 8:
                        cout << "LET'S GO! GO BUY A LOTTERY TICKET NOW"<< endl;
                        break;
                case 9:
                        cout << "Well played my friend, well played" << endl;
                        break;
            }
            setWins(getWins() + 1);
            break;
        }

    if (attempts == 21) {            // Update losses and provide feedback for running out of attempts.
        setLosses(getLosses() + 1);
        switch (rand() % 2) {
            case 0:
                    cout << "You ran out of guesses" << endl;
                    break;
            case 1:
                    cout << "You have guessed 20 times, seriously now you lost" << endl;
                    break;
            case 2:
                    cout << "I gave you so many hints" << endl;
                    break;
            case 3:
                    cout << "Well Well Well... Wrong" << endl;
                    break;
            case 4:
                    cout << "Better luck next time" << endl;
                    break;
            case 5:
                    cout << "I was leading you towards " << randNum << " the whole time!" << endl;
                    break;
            case 6:
                    cout << "C'mon man" << endl;
                    break;
            case 7:
                    cout << "Thought you were better than that" << endl;
                    break;
            case 8:
                    cout << "Looks like you're sleeping on the couch tonight"<< endl;
                    break;
            case 9:
                    cout << "Long road ahead my friend" << endl;
                    break;
            }
        }

    }
}

void NumberGuessingGame::Stats()
{
    // Prints the total number of wins and losses.
    cout << "\n\nTotal number of wins: " << getWins() << endl;
    cout << "Total number of losses: " << getLosses() << endl;
}
