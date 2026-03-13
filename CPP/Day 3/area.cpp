#include<iostream>
using namespace std;
int area(int side)
{
    return side*side;
}
int area(int lenght,int breadth)
{
    return(lenght*breadth);
}

int main()
{
    int s,l,b;

    cout<<"Enter the side of Square: ";
    cin>>s;

    cout<<"Area of Square: "<<area(s)<<endl;

    cout<<"Enter the lenght and breadth of Rectangle : ";
    cin>>l>>b;

    cout<<"Area of rectangle is : "<<area(l,b)<<endl;

    return 0;
}
