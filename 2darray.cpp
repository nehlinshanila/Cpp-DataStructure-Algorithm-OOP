// ? 2D ARRAY

// #include<iostream>
// using namespace std;

// int main(){

//     int n, m;
//     cin >> n >> m;

//     int array[n][m];
//     // can use char, bool or float instead of int here

//     //* taking input
//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             cin >> array[i][j];
//         }
//     }

//     //* printing output
//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             cout << array[i][j]<<" ";
//         }
//         cout << endl;

//     }

//     return 0;
// }

// ? SEARCHING A MATRIX

#include <iostream>
using namespace std;

int main()
{

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> array[i][j];
        }
    }

    int array[n][m];
    int x;
    cin >> x;

    bool flag = false;
    // to check if element is there initially or not
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (array[i][j] == x)
            {
                cout << i << j << endl;
                flag = true;
                // means elemnt has been found
            }
        }
    }
    if (flag)
    {
        cout << "element found";
    }
    else
    {
        cout << "element not found";
    }

    return 0;
}
