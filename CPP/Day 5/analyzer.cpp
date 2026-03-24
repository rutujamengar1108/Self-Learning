#include <iostream>
using namespace std;

class Analyzer
{
    int *arr;
    int n;

public:
    void input()
    {
        cout << "Enter number of elements: ";
        cin >> n;

        arr = new int[n];

        cout << "Enter numbers:\n";
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
    }

    void analyze()
    {
        int max, min, sum = 0;

        max = min = arr[0];

        for (int i = 0; i < n; i++)
        {
            if (arr[i] > max)
                max = arr[i];

            if (arr[i] < min)
                min = arr[i];

            sum += arr[i];
        }

        double avg = (double)sum / n;

        cout << "Maximum = " << max << endl;
        cout << "Minimum = " << min << endl;
        cout << "Average = " << avg << endl;
    }

    ~Analyzer()
    {
        delete[] arr;
    }
};

int main()
{
    Analyzer a;

    a.input();
    a.analyze();

    return 0;
}