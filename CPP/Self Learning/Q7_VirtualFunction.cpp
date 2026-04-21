#include <iostream>
#include <string>

class ComputerPrinter {
protected:
    std::string model;

public:
    ComputerPrinter(std::string m) : model(m) {}

    virtual void printDocument() = 0;

    virtual void showStatus() {
        std::cout << "Printer " << model << " is online and ready." << std::endl;
    }

    virtual ~ComputerPrinter() {} 
};

class LaserPrinter : public ComputerPrinter {
public:
    LaserPrinter(std::string m) : ComputerPrinter(m) {}

    void printDocument() override {
        std::cout << "Laser Printer (" << model << "): Using toner to fuse text to paper..." << std::endl;
    }
};

class InkjetPrinter : public ComputerPrinter {
public:
    InkjetPrinter(std::string m) : ComputerPrinter(m) {}

    void printDocument() override {
        std::cout << "Inkjet Printer (" << model << "): Spraying microscopic ink droplets..." << std::endl;
    }

    void showStatus() override {
        std::cout << "Inkjet Printer " << model << ": Checking ink levels... Ready!" << std::endl;
    }
};

int main() {
    
    ComputerPrinter* myPrinters[2];

    myPrinters[0] = new LaserPrinter("HP LaserJet Pro");
    myPrinters[1] = new InkjetPrinter("Epson EcoTank");

    for (int i = 0; i < 2; i++) {
        myPrinters[i]->showStatus();   
        myPrinters[i]->printDocument(); 
        std::cout << "-----------------------" << std::endl;
    }


    delete myPrinters[0];
    delete myPrinters[1];

    return 0;
}