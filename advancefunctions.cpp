//? SUM OF FIRST N NATURAL NUMBERS
// S = 1+ 2+ 3+ 4+ ....n
// (n(n+1))/2

// #include <iostream>
// using namespace std;

// int sum(int n)
// {
//     int ans = 0;
//     // 1 to n loop and plus one by one
//     for(int i = 0; i <= n; i++){
//         ans += i;
//     }
//     return ans;
// }

// int main()
// {

//     int n;
//     cin >> n;

//     cout << sum(n) << endl;

//     return 0;
// }

//? CHECK PYTHAGORUS TRIPLET
// given x,y,z
// let a = max(x,y,z) and b = min(x,y,z)

#include<iostream>
using namespace std;

bool check(int x, int y, int z){
    int a =max(x, max(y, z));
    int b, c;

    if(a == x)
    {
        b=y;
        c=z;
    }
    else if(a==y)
    {
        b=x;
        c=z;
    }
    else{
        b= x;
        c=y;
    }
    if(a*a == b*b + c*c){
        return true;
    }
    else{
        return false;
    }
}

int main(){

    int x,y,z;
    cin>>x>>y>>z;

    if(check(x,y,z))
    {
        cout<<"Pythagorus"<<endl;
    }
    else{
        cout<<"Not pythagoryus"<<endl;
    }

    return 0;
}

//? CONVERSIONS: BINARY TO DECIMAL
//? CONVERSIONS:OCTAL TO DECIMAL
//? CONVERSIONS:HEXADECIMAL TO DECIMAL
//? CONVERSIONS:DECIMAL TO BINARY
//? CONVERSIONS:DECIMAL TO OCTAL
//? CONVERSIONS:DECIMMAL TO HEXADECIMAL
//? ADD TWO BINARY NUMBERS