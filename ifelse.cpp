#include<iostream>
using namespace std;


//? FIND WHERE YOU CAN GO BASED ON YOUR SAVINGS

// int main() {

//     int savings;
//     cin >> savings;

// // for some reason the greatest number shoupld be at the top followed by smaller numbers
//     if (savings>10000){
//         // again the largest number shoupld be at the top of if. 
//         if(savings>15000){ //nested if else
//             cout<< "all rides\n";
//         }
//         else if(savings>11000){ 
//             cout<< "some rides\n";
//         }
//         else{
//             cout<< "no rides";
//         }
//     }
//     else if( savings>5000){
//         cout << "shopping";
//     }
//     else{
//         cout<<"stay home";
//     }

//     return 0;
// }


//?FIND MAXIMUM OF 3 NUMBERS

// int main(){

// // taking three variable input
//     int a, b, c;
//     cin>>a>>b>>c;
// // finding which is max number of 3

//     if(a>b){
//         if(a>c){
//             cout<<a;
//         }
//         else{
//             cout<<c;
//         }
//     }
//     else{
//         if(b>c){
//             cout<<b;
//         }
//         else{
//             cout<<c;
//         }
//     }

//     return 0;
// }

//?FIND IF NUMBER IS ODD OR EVEN
int main(){
    int a;
    cin>>a;
// % (Percent) symbol is a modulus operator that divides a by b and returns the remainder.
// modulus operator cannot be used in float
//a / 2 == 0 cannot be used 
    if(a % 2 == 0){
        cout<<"even";
    }
    else{
        cout<<"odd";
    }
}