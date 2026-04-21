#include<iostream>
using namespace std;

class FindFactorial
{
private:
    int num;
    long fact;

public:

    void getNumber()
    {
        cout<<"Enter a number: ";
        cin>>num;
    }

    void calculateFactorial()
    {
        fact = 1;

        for(int i=1; i<=num; i++)
        {
            fact = fact * i;
        }
    }

    void display()
    {
        cout<<"Factorial is = "<<fact;
    }
};

int main()
{
    FindFactorial f;

    f.getNumber();
    f.calculateFactorial();
    f.display();

    return 0;
}