//? SORT ARRAY ACCORDING TO ASCENDING ORDER

//?SELECTION SORT
// // find min element in unsorted array and swap it with element at the beginning
// #include<iostream>
// using namespace std;

// int main(){

//     int n;
//     cin >> n;

//     int array[n];
//     for(int i=0; i<n; i++){
//         cin >> array[i];
//     }

//     for(int i=0; i<n-1; i++){
//         for(int j=i+1; j<n; j++){
//             // array j means after the sorted element
//             if(array[j]<array[i]){
//                 // swapping array
//                 // temp is variable nd storing j
//                 int temp = array[j];
//                 // putting i value in j
//                 array[j] = array[i];
//                 // putting temp in i
//                 array[i] = temp;
//             }
//         }
//     }
//     for(int i = 0; i <n; i++){
//         cout<<array[i]<<" "<<endl;
//     }

//     return 0;
// }

//? BUBBLE SORT
//  REPEATEDLY SWAP TWO ADJACENT ELEMENT IF IN WRONG ORDER

// #include <iostream>
// using namespace std;

// int main()
// {

//     int n;
//     cin >> n;

//     int array[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> array[i];
//     }

//     int counter = 1;
//     while (counter < n)
//     {
//         for (int i = 0; i < n - counter; i++)
//         {
//             if (array[i] > array[i + 1])
//             {
//                 int temp = array[i];
//                 array[i] = array[i + 1];
//                 array[i + 1] = temp;
//             }
//         }
//         counter++;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << array[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }

//?INSERTION SORT
// insert elementr from unsorted array to correct position in sorted array

#include <iostream>
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

    for (int i = 1; i < n; i++)
    {
        int current= array[i];
        int j=i-1;
        while(array[j] > current && j>=0){
            array[j+1]=array[j];
            j--;
        }
        array[j+1]=current;
    }
    for(int i=0; i<n; i++){
        cout << array[i] <<" ";
    }cout << endl;
    return 0;
}