#include<iostream>
using namespace std;

int main()
{
    int a[5]={10,20,30,40,50};
    cout<<"Reversed Array: ";
 
    for(int i=4;i>=0;i--)
    {
        cout<<a[i]<<"   ";
    }
    return 0;
}
