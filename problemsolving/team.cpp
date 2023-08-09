#include <iostream>
using namespace std;

int main()
{

    int n, P, V, T;
    int num = 0;
    // n is number of problems
    // p is patya
    // v is vasya
    // t is tonya
    // num is number of times the problem goes onnn
    cin >> n;

    for (int i = 0; i < n; i++)
    // loop to run the number of times the problem exists
    {
        cin >> P >> V >> T;
        // inputting yes or no from the participants

        if (P && V == 1 || P && T == 1 || V && T == 1)
        {
            num++;
        }
        else
        {
            cout << " " << endl;
        }
    }
    cout << num;

    return 0;
}