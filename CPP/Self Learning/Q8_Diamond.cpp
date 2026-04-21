#include <iostream>

class PoweredDevice {
public:
    PoweredDevice() { std::cout << "Device Power System Initialized" << std::endl; }
    
    void turnOn() {
        std::cout << "Device is now ON." << std::endl;
    }
};

class DigitalClock : virtual public PoweredDevice {
public:
    DigitalClock() { std::cout << "Digital Clock Module Initialized" << std::endl; }
};

class FitnessTracker : virtual public PoweredDevice {
public:
    FitnessTracker() { std::cout << "Fitness Tracker Module Initialized" << std::endl; }
};


class Smartwatch : public DigitalClock, public FitnessTracker {
public:
    Smartwatch() { std::cout << "Smartwatch fully synchronized" << std::endl; }
};

int main() {
    Smartwatch myWatch;

    myWatch.turnOn(); 

    return 0;
}