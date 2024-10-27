#include "resources.hpp"

#ifndef PLAYER_H
#define PLAYER_H

class Player {

public:
    Player(const std::string& playerName, std::string target);

    // Methods for properties
    int numCorrectPos() const;
    std::string getName() const;
    std::string getTarget() const;
    std::string getGuess() const;
    int getGuessNum() const;

    // Setters
    void setName(const std::string& playerName);
    void setTarget(const std::string& target);
    void setGuess(const std::string& playerGuess);
    void setGuessNum(int guessNum);

private:
    // Properties
    std::string name;
    std::string targetNum;
    std::string guess;
    int num_Guess;
};

#endif // PLAYER_H