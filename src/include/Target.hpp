#include "resources.hpp"

//Headers contain the class interface
//Class declarations and function prototypes

#ifndef TARGET_H //Include guard to prevent multiple inclusions
#define TARGET_H

class Target{ // Class declaration

public: //accessible outside of this class

    Target(int value); // Constructor delcaration, init object

    //Public Function prototype delcarations
    int getVaue() const;
    void setValue(int value);

private: // only accessible within class
    //Private data members (fields)
    int value;

};





#endif // TARGET_H