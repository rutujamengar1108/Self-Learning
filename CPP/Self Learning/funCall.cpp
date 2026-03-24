#include<iostream>
using namespace std;

void swap(int &x,int &y)
{

int temp = x;
x = y;
y = temp;
cout<<"Values Swapped:"<<endl;
}

int main() 
{
    int a = 10;
    int b = 20;

    cout<<"Before swap = "<<a<<" "<<b<<endl;

    swap(a,b);

    cout<<"After swap "<<a<<" "<<b<<endl;

    return 0;



}