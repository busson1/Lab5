#ifndef RandNum_h
#define RandNum_h


class NumberGuessingGame {
public:
    NumberGuessingGame();
    
    void Game();
    void Stats();

    int getRandomNumber(); // Getter for random number
    void setRandomNumber(int num); // Setter for random number

    int getWins(); // Getter for wins
    void setWins(int num); // Setter for wins

    int getLosses(); // Getter for losses
    void setLosses(int num); // Setter for losses



private:
    int wins;
    int losses;
    int randNum;
};
#endif RandNum_h
