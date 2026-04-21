#include<iostream>
using namespace std;

class Student {
private:
    int id;
    string name;

public:
    
    Student(int i, string n) {
        id = i;
        name = n;
        cout << "Constructor called for " << name << endl;
    }

    void display() {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
    }
    
    ~Student() {
        cout << "Destructor called for " << name << endl;
    }
};

int main() {

    Student s1(1, "Shruti");
    Student s2(2, "Rahul");

    cout << "\nStudent Details:\n";
    s1.display();
    s2.display();

    return 0;
}