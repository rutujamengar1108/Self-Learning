#include<iostream>
using namespace std;

class DecimalToBinary
{
private:
    int num;
    int binary[32];
    int i;

public:

    void getNumber()
    {
        cout<<"Enter decimal number: ";
        cin>>num;
    }

    void convert()
    {
        i = 0;

        while(num > 0)
        {
            binary[i] = num % 2;
            num = num / 2;
            i++;
        }
    }

    void display()
    {
        cout<<"Binary equivalent is: ";

        for(int j = i-1; j >= 0; j--)
        {
            cout<<binary[j];
        }
    }
};

int main()
{
    DecimalToBinary d;

    d.getNumber();
    d.convert();
    d.display();

    return 0;
}