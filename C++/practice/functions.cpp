// ? FIND FACTORIAL OF TWO NUMBERS

// #include<iostream>
// using namespace std;

// int main(){
// // very lengthy therefore we will use function
//     int n1, n2;
//     cin >> n1 >> n2;

//     int fact1=1;
//     for(int i=2; i<=n1; i++){
//         fact1=fact1*i;
//     }
//      int fact2=1;
//     for(int i=2; i<=n2; i++){
//         fact2=fact2*i;
//     }
//     cout<<fact1<<" "<<fact2<<endl;

//     return 0;
// }
// ?WRTTE FUNCTION TO ADD TWO INTEGERS

// // only 2 and 3 coming here not a and b. their values only
// // add functions making two local variables int num 1 num2 and inserting values in them 2 3
// int add(int num1, int num2){
//         print(num1);
//         print(num2); 
//         int sum = int num1 + int num2;
//         return sum;
//         // after returning the result num1 and num2 are destroyed
//     }
// void print(int num){
//     cout<<num<<endl;
//     return;
// }

// int main(){

//     int a=2;
//     // when we call int we only send variables not their datatypes
//     int b=3;
//     cout<<add(a,b)<<endl;

//     return 0;
// }

// ?PRINT ALL PRIME NUMBERS

// #include<iostream>
// #include<math.h>
// using namespace std;

// // bool to say if true or false
// bool isPrime(int num){
//     // fun checking if prime
//     for(int i=2;i<=sqrt(num);i++){
//         if(num%i==0){
//             return false;
//         }
//     }
//     // goes back to main fucntion
//     return true;
// }

// int main(){

//     int a,b;
//     cin >> a >> b;

//     for(int i=a;i<=b;i++){
//         // no need to write isPrime(i)==true
//         if(isPrime(i)){
//             // calling the fucntion here
//             cout<<i<<endl;
//         }
//     }

//     return 0;
// }

// ? FIBENACCI SEQUENCE SUM OF PREVIOUS TWO TERMS

// 


// ?FACOTRIAL

// #include<iostream>
// using namespace std;

// int fac(int n){
//     int factorial=1;
//     for (int i=2; i<=n; i++){
//         // factorial=factorial*i;
//         factorial*=i;
//     }
//     return factorial;
// }

// int main(){

//     int n;
//     cin >> n;

//     int ans = fac(n);
//     cout<<ans<<endl;

//     return 0;
// }

//? BINARY COEFFICIENT. NCR

// #include<iostream>
// using namespace std;


// int fact(int n){
//     int factorial=1;
//     for(int i=2;i<=n;i++){
//         factorial*=i;
//     }
//     return factorial;
// }

// int main(){

//     int n,r;
//     cin>>n>>r;

//     int ans = fact(n)/(fact(r)*fact(n-r));
//     cout<<ans<<endl;

//     return 0;
// }

// ?PASCAL TRIANGLE
// 1
// 1  1
// 1  2  1
// 1  3  3  1
// 1  4  6  4  1

#include<iostream>
using namespace std;

int fact(int n){
    int factorial=1;
    for(int i=2;i<=n;i++){
        factorial*=i;
    }
    return factorial;
}

int main(){

    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
        }
        cout<<endl;
    }

    return 0;
}