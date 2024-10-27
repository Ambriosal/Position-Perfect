#include "../include/resources.hpp"

class Timer {

public:

    Timer();

    // Methods to set and get timer
    void setTimer();
    double getTimer() const;

private:
    std::chrono::high_resolution_clock::time_point timerStart;
    std::chrono::seconds countdownDuration;

};