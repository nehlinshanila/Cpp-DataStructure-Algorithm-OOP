#include<iostream>
using namespace std;

//? EXAMPLE 1
// int main(){
//     int i=1;
//         //1 + //2 = 3 XXXX will be 4
//     i = i++ + ++i;
//     cout << i <<endl;

//     return 0;
// }


//? EXAMPLE 2

// int main(){
//     int i=1;
//     int j=2;
//     int k;
//     // post incrementer i++ starts working after the first increment
//     //  1   2   1     2      3     4
//     k = i + j + i++ + j++ + ++i + ++j;
//     cout << i<<j<<k <<endl;

//     return 0;
// }


//? EXAMPLE 3
// int main(){
//     int i=0;
//     //  0      0      1     1
//     i = i++ - --i + ++i - i--;
//     cout << i<<endl;

//     return 0;
// }

//? EXAMPLE 4
// int main(){
//     int i=1, j=2, k=3;
// //          1     2    3
//     int m = i-- - j-- -k--;
// // i now 0, j now 1, k now 2
// // m now -4
//     cout << i<<j<<k<<m<<endl;

//     return 0;
// }

//? EXAMPLE 5
int main(){
    int i=10, j=20, k;
//      10    9       19    20    9   20     10   19
    k = i-- - i++ + --j - ++j + --i - j-- + ++i -j++;
//      9     10      19    20    9   19     10   20

    cout << i<<j<<k<<endl;

    return 0;
}