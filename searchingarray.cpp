//? FIND KEY FROM AN ARRAY AND RERTURN INDEX. IF KEY NOT PRESENT, RETURN -1

// #include <iostream>
// using namespace std;

// // function for linear search.
// // sending (array), (array size), and (key we will find)
// int linearSearch(int array[], int n, int key){
//     // for loop to traverse the elements
//     for (int i = 0; i < n; i++) {
//         // checking array if equal to key
//         if (array[i] == key)
//         {
//             // if so return true
//             return i;
//         }
//     }
//     // else
//     return -1;
// }

//     int main()
// {

//     int n;
//     cin >> n;
//     // taking array size and inputting

//     int array[n];
//     // declaring size of array
//     for (int i = 0; i < n; i++)
//     {
//         cin >> array[i];
//         // input for loop
//     }

//     int key;
//     cin >> key;
//     // inputtiong key from user which we will find from array

//     // calling function and sending array, size and key
//     cout << linearSearch(array, n, key);

//     return 0;
// }
// //*time complexity= 0(n)


//? BINARY SEARCH TO FIND KEY FROM ARRAY
// element should be in sorted or ascending order. 
// we will go to middle first then compare to the key
// then according to key less than or greater than middle we will move accordingly
// after middle the starting point will be the middle from starting point then the 
// ending point will depend on key is before or after
// time will be like n/2, n/4 ... etc

#include<iostream>
using namespace std;

int binary_search_function(int array[], int n, int key){
    // defining starting and ending point
    int s=0;
    int e=n;
    while(s<=e){
        int mid=(s+e)/2;
        if(array[mid]==key){
            return mid;
        }
        else if(array[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }

    }
    return -1;
}

int main(){

    int n;
    cin >> n;

    int array[n];
    for(int i=0; i<n; i++){
        cin >> array[i];
    }

    int key;
    cin>>key;

    cout<<binary_search_function(array, n, key)<<endl;

    return 0;
}
//* time complmexity= O(log^n 2)