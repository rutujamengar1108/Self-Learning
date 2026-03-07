#include<iostream>
using namespace std;

int main()
{
    int a=10,b=5;

    cout<<"Logical Operators:"<<endl;
    cout<<"((a>b) && (b>0))"<<endl;
    cout<<"((a<0b) || (b>0))"<<endl;
    cout<<"(!(a==b)"<<!(a==b)<<endl;

    cout<<"Unary Operators:"<<endl;

    cout<<"a= "<<a<<endl;
    cout<<"++a ="<<++a<<endl;
    cout<<"--b= "<<--b<<endl;

    cout<<"Assignment Operators:"<<endl;

    int x=20;
    cout<<"x =>"<<x<<endl;

    x=x+10;//x+=10
    cout<<"x+=10 ->"<<x<<endl;

    x-=5;
    cout<<"x-=5"<<x<<endl;

    x *=2;
    cout<<"x *=2 ->"<<x<<endl;

    x /=5;
    cout<<"x/=5 ->"<<x<<endl;

    cout<<"Ternary Operator: "<<endl;

    cout<<"Enter two no.: ";
    cin>>a>>b;

    int max=(a>b)? a:b;
    cout<<"The Greater Number: "<<max<<endl;

    return 0;
}