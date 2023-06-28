#include <iostream>
using namespace std;

// int main(){
// // can be written both ways
// //               = 0  1  2  3
//     int array[4]={10,20,30,40};
//     // int array[4];
//     // array[0] =10;
//     // array[1] =20;
//     // array[2] =30;
//     // array[3] =40;
//     cout<<array[3]<<endl;

//     return 0;
// }

//? USER INPUT ARRAY
// #include<iostream>
// using namespace std;

// int main(){

//     int n;
//     cin >> n;
//     // taking SIZE of array (n) from user

//     int array[n];
//     // declaring array from user

//     for(int i = 0; i < n;i++){
//         // this loop to take INPUT ELEMENT from arrays
//         cin >> array[i];
//     }

//     // making another for loop to take OUTPUT ELEMENT from arrays
//     // because we dont know what the user inputted
//     for(int i =0; i<n; i++){
//         cout << array[i] <<" ";
//     }

//     return 0;
// }

// ?USER INPUT ARRAY THEN FIND MAX OR MIN

#include <iostream>
#include <climits>
// for INT_MIN & INT_MAX
using namespace std;

int main()
{

    int n;
    cin >> n;

    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    // we have to compare every element until we fins max and min
    //  we gotta initialize max min first else compiler will call garbage value
    //  so max = and min =
    // btw need to use maxNo instead of max cause name in system something
    int maxNo = INT_MIN;
    // INT_MIN is the minimum integer possible in cpp
    // so that whenever there is a greater value then the for loop will work
    int minNo = INT_MAX;
    // for int_max and int_min mention in header files

    for (int i = 0; i < n; i++)
    {
        // if(arr[i] > maxNo){
        //     // cant use array[i], gotta use arr[i] cause name in system sonmethg
        //     maxNo = arr[i];
        // }

        // if(arr[i] < minNo){
        //     minNo = arr[i];
        // }
        // we can either use this forloop or use a builtin function like below
        maxNo = max(maxNo, array[i]);
        // here the max function gives max numbers of the parameters provided either max or array[i]
        minNo = min(minNo, array[i]);
    }
    cout << maxNo << " " << minNo << endl;

    return 0;
}