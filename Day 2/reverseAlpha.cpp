#include<iostream>
using namespace std;

int main()
{
    int row=5;

    for(int i=row; i>=1; i--)
    {
        for(char ch='A'; ch<'A'+i ; ch++)
        {
            cout<<ch<<"  ";
        }
        cout<<endl;
    }
    return 0;
}