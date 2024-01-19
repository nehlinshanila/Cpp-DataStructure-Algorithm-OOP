#include <iostream>
using namespace std;

//? ONLY GO OUT ON ODD DAYS WITH POCKET MONEY
// int main(){

//     int money=2000;
//     int date;

//     for(date=1; date<=30; date++){

//         if(date%2==0){
//             // if date is even
//             // continue hit wont execute next sentence but go to next iteration of that loop
//             continue;
//         }
//         if(money==0){
//             // break statement is used to terminate the loop
//             break;
//         }
//         cout<<"go out today"<<endl;
//         money=money-300;

//     }

//     return 0;
// }

//? PRINT NUMBER FROM 1 TO 100 APART FROM THOSE DIVISIBLE BY 3
// int main() {

//     int num;

//     for(num = 0; num < 100; num++)
//     {

//         if(num%3==0)
//         {
//         continue;
//         //continue means this loop will go on and on and not the next item
//         }
//     cout<<num<<endl;
//     }
//     return 0;

// };

//? CHECK IF A NUMBER IS PRIME OR NOT

// int main(){

//     int n;
//     cin>>n;
//     int i;

//     for(i=2; i < n; i++)
//     // it will divide by 2 because everything is ndivisible by 1
//     // i<n means loop will iterate till (n-1)
//     {
//         if(n%i ==0)
//         //not divisible by anything
//         {
//             cout<<"not prime\n";
//             break;
//         }
//     }
//     if(i==n){
//     cout<<"prime num\n"<<endl;
//     }
//     return 0;
// }

//? FIND PRIME NUMBER BETWEEN 2 GIVEN INT BY USER

int main()
{

    int a, b;
    cin >> a >> b;
    int i;
    int j;
    // two loops. first will check between two numbers. second will check if prime or not
    for (i = a; i < b; i++)
    // for i=a means starts from first num
    // i<b means until it reaches the 2nd number
    // i++ updating
    {
        // now checking if prime or not
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                break;
                // break to get out of this FOR LOOP if its not prime(not if statement)
            }
        }
        if (j==i)
        // we dont know if we broke the loop after first !prime or last !prime
        // therefore we check if j==i to be sure its the last
        {
            cout <<i<< endl;
        }
    }
    return 0;
}