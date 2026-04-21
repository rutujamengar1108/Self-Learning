#include<iostream>
#include<map>
#include<fstream>
using namespace std;

class StudentRecord
{
private:
    map<int,string> students;

public:

    void addRecord()
    {
        int roll;
        string name;

        cout<<"Enter Roll No: ";
        cin>>roll;

        cout<<"Enter Name: ";
        cin>>name;

        students[roll] = name;
    }

    void displayRecords()
    {
        if(students.empty())
        {
            cout<<"No records found\n";
            return;
        }

        for(auto x : students)
        {
            cout<<"Roll No: "<<x.first
                <<" Name: "<<x.second<<endl;
        }
    }

    void saveToFile()
    {
        ofstream file("students.txt");

        for(auto x : students)
        {
            file<<x.first<<" "
                <<x.second<<endl;
        }

        file.close();

        cout<<"Saved to file successfully\n";
    }
};

int main()
{
    StudentRecord s;

    int choice;

    while(true)
    {
        cout<<"\n--- MENU ---\n";
        cout<<"1. Add Record\n";
        cout<<"2. Display Records\n";
        cout<<"3. Save to File\n";
        cout<<"4. Exit\n";

        cout<<"Enter choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                s.addRecord();
                break;

            case 2:
                s.displayRecords();
                break;

            case 3:
                s.saveToFile();
                break;

            case 4:
                return 0;

            default:
                cout<<"Invalid choice\n";
        }
    }
}