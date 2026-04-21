#include<iostream>
using namespace std;

int main()
{
    int N;
    cout<<"Enter the size of array: ";
    cin>>N;
     
    int arr[N];
    cout<<"Enter the elements: ";

    for(int i=0;i<N;i++)
    {
       cin>>arr[i];
    }
     int largest=arr[0];
     int secLargest=arr[0];
     for(int i=1;i<N;i++)
     {
        if(arr[i]>largest)
        {
          largest=arr[i];
        }
         for(int i=0;i<N;i++)
         {
            if(arr[i]>secLargest && arr[i]<largest)
            {
            
            secLargest=arr[i];
            }
         }
      }
       cout<<" Second Largest Element is: "<<secLargest<<endl;
       //cout<<"Largest Element is: "<<largest<<endl;
      
     return 0;
     
}