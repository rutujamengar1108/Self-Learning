#include <iostream>   
#include <exception>  
#include <string>     

class PaperOutException : public std::exception {
private:
    std::string message;
    int errorCode;

public:
    PaperOutException(std::string msg, int code) 
        : message(msg), errorCode(code) {}

    const char* what() const noexcept override {
        return message.c_str();
    }

    int getErrorCode() const {
        return errorCode;
    }
};

class OfficePrinter {
private:
    int sheetsInTray;

public:
    OfficePrinter(int sheets) : sheetsInTray(sheets) {}

    void printDocument(int pages) {
        if (pages > sheetsInTray) {
            throw PaperOutException("Failure: Not enough paper in the tray.", 504);
        }

        sheetsInTray -= pages;
        std::cout << "Printing " << pages << " pages successfully!" << std::endl;
    }
};

int main() {
    OfficePrinter myPrinter(10); 

    try {
        std::cout << "Attempting to print a 25-page report..." << std::endl;
        myPrinter.printDocument(25); 
    } 
    catch (const PaperOutException& e) {
        std::cerr << "Caught Exception: " << e.what() << std::endl;
        std::cerr << "System Error Code: " << e.getErrorCode() << std::endl;
    } 
    catch (const std::exception& e) {
        std::cerr << "Standard Exception: " << e.what() << std::endl;
    }

    return 0;
}