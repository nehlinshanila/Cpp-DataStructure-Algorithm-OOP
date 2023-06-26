#include <iostream>
using namespace std;

//? RECTANGULAR PATTERN
// int main(){

//     int rows, cols;

//     cin >> rows >> cols;

//     for(int i  = 1; i<=rows; i++){
//         for(int j = 1; j<=cols; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//         // else it will be a straight line
//     }

//     return 0;
// }

//? HOLLOW RECTANGLE PATTERN
// int main()
// {

//     int rows, cols;
//     cin >> rows >> cols;

//     for (int i = 1; i <= rows; i++)
//     {
//         for (int j = 1; j <= cols; j++)
//         {

//             if (i == 1 || i == rows)
//             // && wont work we need to use OR
//             {
//                 cout << "*";
//             }
//             else if (j == 1 || j == cols)
//             {
//                 cout << "*";
//             }
//             else
//             {
//                 cout << " ";
//             }
//         }
//         cout << endl;
//     }

//     return 0;
// }

//? INVERTED HALF PYRAMID

// #include<iostream>
// using namespace std;

// int main(){

//     int n;
//     cin >> n;

//     for(int i = n; i>=1; i--){
//         for(int j=1; j<=i; j++){
//             cout <<"*";
//         }
//             cout << endl;

//     }

//     return 0;
// }

// ? HALF PYRAMID AFTER 180 ROTATION

// #include<iostream>
// using namespace std;

// int main(){

//     int n;
//     cin >> n;

//     for(int i =1; i<=n; i++){
//         for(int j=1; j<=n; j++){
//             if(j<=n-i){
//                 cout << " ";
//             }
//             else{
//                 cout<<"*";
//             }
//         }
//         cout<<endl;
//     }

//     return 0;
// }

//? HALF PYRAMIDS USING NUMBERS

// #include<iostream>
// using namespace std;

// int main(){

//     int n;
//     cin >> n;

//     for(int i=1; i<=n; i++){
//         for(int j=1;j<=i; j++){
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }

//     return 0;
// }

// ? Floyed's triangle

// #include <iostream>
// using namespace std;

// int main()
// {

//     int n;
//     cin >> n;
//     int count=1;
//     // initializing variable as 1 first

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout<<count<<" ";
//             count++;
//             // after printing once it will keep increasing by 1
//         }
//         cout<<endl;
//     }

//     return 0;
// }

//? BUTTERFLY PATTERN

#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    for(int i=1; i <=n; i++){
        for(int j=1; j <=i; j++){
            cout<<"*";
        }
        int space= 2*n - 2*i;
        for(int j=1; j <=space; j++){
            cout<<" ";
        }
        for(int j=1; j <=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n; i >=1; i--){
        for(int j=1; j <=i; j++){
            cout<<"*";
        }
        int space= 2*n - 2*i;
        for(int j=1; j <=space; j++){
            cout<<" ";
        }
        for(int j=1; j <=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}