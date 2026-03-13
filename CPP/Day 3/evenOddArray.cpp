#include<iostream>
using namespace std;

int main()
{
    int a[5]={1,2,3,4,5};
    int even=0,odd=0;

    for(int i=0;i<5;i++)
    
        if(a[i]%2==0)
        {
        even++;
        cout<<"Even number is:"<<a[i]<<endl;
        }
        else
        {
        odd++;
        cout<<"Odd number is:"<<a[i]<<endl;
        }
 
        cout<<"Even= "<<even<<endl;
        cout<<"Odd= "<<odd<<endl; 
        return 0;  
}