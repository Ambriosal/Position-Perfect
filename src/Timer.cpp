#include "../include/resources.hpp"
#include "../include/Timer.hpp"

Timer::Timer() 
    : countdownDuration(std::chrono::minutes(5)) {}

// Method to set the start timer
void Timer::setTimer() {
    timerStart = std::chrono::high_resolution_clock::now();
}

// Method to get the elapsed time in seconds since setTimer() was called
double Timer::getTimer() const {
    auto now = std::chrono::high_resolution_clock::now();
        auto elapsed = std::chrono::duration_cast<std::chrono::seconds>(now - timerStart);
        auto remaining = countdownDuration - elapsed;

        // If the timer has expired, return 0
        return remaining.count() > 0 ? remaining.count() : 0;
}