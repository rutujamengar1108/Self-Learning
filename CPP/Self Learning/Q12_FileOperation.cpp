#include <iostream>
#include <fstream>
#include <string>

class PrinterConfig {
public:
    std::string model;
    std::string ip_address;
    int total_pages_printed;

    PrinterConfig() : model("Unknown"), ip_address("0.0.0.0"), total_pages_printed(0) {}

    void display() {
        std::cout << "\n--- Device Configuration ---" << std::endl;
        std::cout << "Model: " << model << "\nIP: " << ip_address 
                  << "\nLifetime Pages: " << total_pages_printed << std::endl;
    }
};

void saveConfig(const PrinterConfig& config) {
    std::ofstream outFile("config.dat");
    if (outFile.is_open()) {
        outFile << config.model << "\n";
        outFile << config.ip_address << "\n";
        outFile << config.total_pages_printed << "\n";
        outFile.close();
        std::cout << "[System] Configuration saved to disk." << std::endl;
    }
}

bool loadConfig(PrinterConfig& config) {
    std::ifstream inFile("config.dat");
    if (inFile.is_open()) {
        std::getline(inFile, config.model);
        std::getline(inFile, config.ip_address);
        inFile >> config.total_pages_printed;
        inFile.close();
        return true;
    }
    return false;
}

int main() {
    PrinterConfig myPrinter;

    if (loadConfig(myPrinter)) {
        std::cout << "Existing configuration found!" << std::endl;
        myPrinter.display();
    } else {
        std::cout << "No config found. Let's set up a new printer." << std::endl;
        std::cout << "Enter Model: ";
        std::getline(std::cin, myPrinter.model);
        std::cout << "Enter IP: ";
        std::cin >> myPrinter.ip_address;
        myPrinter.total_pages_printed = 0;
        
        saveConfig(myPrinter);
    }

    std::cout << "\nSimulating a print job of 50 pages..." << std::endl;
    myPrinter.total_pages_printed += 50;
    
    saveConfig(myPrinter);
    myPrinter.display();

    return 0;
}