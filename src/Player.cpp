#include "../include/resources.hpp"
#include "../include/Player.hpp"

// Constructor definition
Player::Player(const std::string& playerName, std::string target)
    : name(playerName), targetNum(target), num_Guess(0) {}

// Method to calculate the number of correct positions between guess and target
int Player::numCorrectPos() const {
    int counter = 0;
    const std::string &playerGuess = getGuess();
    const std::string &target = getTarget();

    auto str1 = playerGuess.begin();
    auto str2 = target.begin();

    while (str1 != playerGuess.end() && str2 != target.end()) {
        if (*str1 == *str2) {
            counter += 1;
        }

        ++str1;
        ++str2;
    }
    return counter;
}

// Getters
std::string Player::getName() const {
    return name;
}

std::string Player::getTarget() const {
    return targetNum;
}

std::string Player::getGuess() const {
    return guess;
}

int Player::getGuessNum() const {
    return num_Guess;
}

// Setters
void Player::setName(const std::string& playerName) {
    name = playerName;
}

void Player::setTarget(const std::string& target) {
    targetNum = target;
}

void Player::setGuess(const std::string& playerGuess) {
    guess = playerGuess;
}

void Player::setGuessNum(int guessNum) {
    num_Guess = guessNum;
}