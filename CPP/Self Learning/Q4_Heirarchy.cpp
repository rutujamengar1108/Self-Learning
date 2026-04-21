#include <iostream>
#include <string>


class Printer;
void networkAdminReset(Printer& p);


class Printer {
private:
    int tonerLevel;
    std::string errorLog;

public:
    Printer(int toner) : tonerLevel(toner), errorLog("No errors.") {}

    virtual void print() {
        std::cout << "Printer: Outputting hard copy..." << std::endl;
        tonerLevel -= 5;
    }

  
    friend class MaintenanceTech;
    

    friend void networkAdminReset(Printer& p);
};


class Scanner {
public:
    void scan() {
        std::cout << "Scanner: Converting paper to PDF..." << std::endl;
    }
};


class AllInOneDevice : public Printer, public Scanner {
public:
    AllInOneDevice(int toner) : Printer(toner) {}

    void copy() {
        std::cout << "MFP: Starting Copy Job..." << std::endl;
        scan();  
        print(); 
    }
};


class MaintenanceTech {
public:
    void performDiagnostic(Printer& p) {
       
        std::cout << "\n[Tech Report]" << std::endl;
        std::cout << "Toner Level: " << p.tonerLevel << "%" << std::endl;
        std::cout << "Internal Logs: " << p.errorLog << std::endl;
    }
};


void networkAdminReset(Printer& p) {
    p.errorLog = "Logs cleared by Network Admin.";
    std::cout << "\n[Admin] Printer logs have been wiped remotely." << std::endl;
}

int main() {
    
    AllInOneDevice officeJet(85);
    officeJet.copy();

    MaintenanceTech tech;
    tech.performDiagnostic(officeJet);

    networkAdminReset(officeJet);
    tech.performDiagnostic(officeJet);

    return 0;
}