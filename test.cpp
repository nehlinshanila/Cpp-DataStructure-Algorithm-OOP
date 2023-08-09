#include <iostream>
using namespace std;

int main()
{

    int input, arr[100];

    cin >> input;
    for (int i = 0; i < input; i++)
    {
        cin >> arr[i];
    }

    int largest = -1;
    
    for (int i = 0; i < input; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    cout << "Largest of the: " << largest << endl;

    return 0;
}