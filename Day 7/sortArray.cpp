#include<iostream>
using namespace std;

class SortArray
{
private:
    int arr[10];

public:

    void getData()
    {
        cout<<"Enter 10 elements: "<<endl;
        for(int i=0;i<10;i++)
        {
            cin>>arr[i];
        }
    }

    void sortArray()
    {
        int temp;

        for(int i=0;i<10;i++)
        {
            for(int j=i+1;j<10;j++)
            {
                if(arr[i] > arr[j])
                {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }

    void display()
    {
        cout<<"Sorted array is: "<<endl;

        for(int i=0;i<10;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
};

int main()
{
    SortArray s;

    s.getData();
    s.sortArray();
    s.display();

    return 0;
}