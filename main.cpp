/*
 Jake Busson
 Computer Science
 Due: Nov. 12, 2024
 Lab Name: Lab 5 Random Number
 Lab Description: In lab 5 I made a number guessing game where the user gets a maximum of 20 attempts to guess the random number that the compuer selects. After the game is played it will tell the user if they won or lost and ask if they want to play the game again. If they don't enter 'y' it will exit the program and give them the number of their wins and loses. There are 10 different outputs for if the user guesses higher, lower, guesses it or doesn't end up guessing it, so a variation of wordage.
*/

#include "RandNum.hpp"
#include <iostream>
using namespace std;

int main() {
    // Create the object "game" of NumberGuessingGame.
    NumberGuessingGame game;
    char PlayAgain;

    // Display a welcome message and game instructions.
    cout << "Welcome to the Number Guessing Game! " << endl;
    cout << "You will have 20 attempts to guess a number from 1 to 100" << endl << endl;

    do {
        // Run the number guessing game and update the game state.
        game.Game();

        // Ask the player if they want to play again.
        cout << "Do you want to play again? (y/n):  ";
        cin >> PlayAgain;

    } while (PlayAgain == 'y' || PlayAgain == 'Y');

    // Display the total number of wins and losses.
    game.Stats();

    return 0;
}
