#include <iostream>
#include <string>
#include <exception>
#include <ctime>

class PrinterException : public std::exception {
protected:
    std::string message;
public:
    PrinterException(std::string msg) : message(msg) {}
    const char* what() const noexcept override {
        return message.c_str();
    }
};

class InkLowException : public PrinterException {
public:
    InkLowException() : PrinterException("CRITICAL: Toner level too low to complete print job!") {}
};

class PaperJamException : public PrinterException {
public:
    PaperJamException() : PrinterException("HARDWARE ERROR: Paper jam detected in Tray 1.") {}
};

class SmartPrinter {
private:
    int inkLevel;
public:
    SmartPrinter(int ink) : inkLevel(ink) {
        std::srand(std::time(0)); // Seed for random paper jam simulation
    }

    void print(int pages) {
        std::cout << "Starting print job for " << pages << " pages..." << std::endl;

        for (int i = 1; i <= pages; ++i) {
            if (inkLevel < 2) {
                throw InkLowException();
            }
            if (std::rand() % 10 == 0) {
                throw PaperJamException();
            }

            inkLevel -= 2;
            std::cout << "Printing page " << i << "... (Ink: " << inkLevel << "%)" << std::endl;
        }
        std::cout << "Job completed successfully!\n" << std::endl;
    }
};

int main() {
    SmartPrinter myPrinter(10); 

    try {
        myPrinter.print(10); 
    } 
    catch (const InkLowException& e) {
        std::cerr << "[User Alert] " << e.what() << "\nAction: Please replace the cartridge." << std::endl;
    } 
    catch (const PaperJamException& e) {
        std::cerr << "[Hardware Alert] " << e.what() << "\nAction: Open the back panel and clear the path." << std::endl;
    }
    catch (const PrinterException& e) {
        std::cerr << "[General Error] " << e.what() << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "Unexpected Standard Error: " << e.what() << std::endl;
    }

    std::cout << "\nProgram continues running... system is stable." << std::endl;

    return 0;
}