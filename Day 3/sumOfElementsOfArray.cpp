#include<iostream>
using namespace std;

int main()
{
    int a[50],n,sum=0;
    cout<<"Enter number of Elements of an Array:";
    cin>>n;

    cout<<"Enter Elements :";
    for(int i=0;i<n ;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    cout<<"Sum of all Elements:"<<sum;

    return 0;
}
