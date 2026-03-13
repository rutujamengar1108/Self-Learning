#include<iostream>
using namespace std;

int main()
{
    int a[50],n,largest;
    cout<<"Enter the number of Elements of an Array: ";
    cin>>n;
      cout<<"Enter Elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    largest=a[0];
        for(int i=1;i<n;i++)
        {
           if(a[i]>largest)
           {
            largest=a[i];
           }
        }
        cout<<"Largest Number is:"<<largest;
        return 0;
}
