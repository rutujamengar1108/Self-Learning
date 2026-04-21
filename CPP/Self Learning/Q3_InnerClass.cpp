#include<iostream>
using namespace std;

class Outer {
private:
    int x;

public:
 
    Outer(int val) {
        x = val;
    }

   
    class Inner {
    public:
        void display() {
            cout << "Inside Inner Class" << endl;
        }
    };

    void showOuter() {
        cout << "Value of x in Outer class: " << x << endl;
    }
};

int main() {

    Outer obj(10);     
    obj.showOuter();

    
    Outer::Inner in;    
    in.display();

    return 0;
}