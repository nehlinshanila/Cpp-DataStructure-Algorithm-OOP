#include <iostream>
#include <cmath>
using namespace std;

// ? CHECK IF NUM IS PRIME OR NOT
// int main(){

//     int n;
//     cin >> n;

//     bool flag=0;

//     for(int i=2; i<=sqrt(n); i++){
//         if(n%i==0){
//             cout << "Non Prime" << endl;
//             flag=1;
//             break;
//         }
//     }

//     if(flag==0){
//         cout << "Prime" << endl;
//     }

//     return 0;
// }

// ? REVERSE A NUM

// #include<iostream>
// using namespace std;

// int main(){

//     int n;
//     cin >> n;
//     int reverse=0;
//     // keep finding last digit until n isnt 0
//     while(n>0){
//         int lastdigit = n%10;
//         // if we divide a num by 10 then we get num thats in 1's place
//         reverse= reverse*10 + lastdigit;
//         // we want 4 from 1234. then if we take 3 it will be 3412
//         // we dont want that we need 4321 therefore
//     n=n/10;
//     // divide by 10 to remove last digit
//     // basically do the math first
//     }
//     cout << reverse << endl;

//     return 0;
// }

// ? ARMSTRONG NUM OR NOT FIND OUT
// ? 1 5 3. cube all 1 125 27. add to 153

#include <iostream>
#include<math.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int sum = 0;
    int originaln=n;

    while (n > 0)
    {
        int lastdigit = n % 10;
        sum =  sum + pow(1,3);
        // finding cube with pow function
        n=n/10;
        // finding last digit
    }
    if (sum==originaln){
        cout << "Armstrong number"<<endl;
    }
    else{
        cout << "NOT Armstrong"<<endl;
    }
    return 0;
}