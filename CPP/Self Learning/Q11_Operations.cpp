#include <iostream>
#include <string>
#include <exception>
#include <limits> 

class PrinterError : public std::exception {
    std::string msg;
public:
    PrinterError(std::string m) : msg(m) {}
    const char* what() const noexcept override { return msg.c_str(); }
};

class OfficePrinter {
protected:
    std::string modelName;
    int paperCount;

public:
    OfficePrinter() : modelName("Unknown"), paperCount(0) {}

    void setup() {
        std::cout << "--- Printer Setup ---\n";
        std::cout << "Enter Printer Model Name: ";
        std::getline(std::cin >> std::ws, modelName); 

        std::cout << "Enter initial paper count: ";
        while (!(std::cin >> paperCount) || paperCount < 0) {
            std::cout << "Invalid input. Please enter a positive number for paper: ";
            std::cin.clear(); 
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // discard buffer
        }
    }

    void runJob() {
        int pages;
        std::cout << "\n--- Current Status: " << modelName << " ---\n";
        std::cout << "Paper Level: " << paperCount << " sheets.\n";
        std::cout << "How many pages would you like to print? ";
        std::cin >> pages;

        if (pages > paperCount) {
            throw PrinterError("Insufficient paper to complete this job!");
        }

        paperCount -= pages;
        std::cout << ">> [SUCCESS] Printed " << pages << " pages.\n";
        std::cout << ">> Remaining Paper: " << paperCount << "\n";
    }
};

int main() {
    OfficePrinter myPrinter;

    myPrinter.setup();

    try {
        char choice;
        do {
            myPrinter.runJob();
            std::cout << "\nPrint another document? (y/n): ";
            std::cin >> choice;
        } while (choice == 'y' || choice == 'Y');
    }
    catch (const PrinterError& e) {
        std::cerr << "\n[ERROR] " << e.what() << std::endl;
    }

    std::cout << "\nExiting Printer Interface. Goodbye!" << std::endl;
    return 0;
}