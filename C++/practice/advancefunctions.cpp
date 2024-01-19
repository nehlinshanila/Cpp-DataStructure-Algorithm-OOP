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

// #include<iostream>
// using namespace std;

// bool check(int x, int y, int z){
//     int a =max(x, max(y, z));
//     int b, c;

//     if(a == x)
//     {
//         b=y;
//         c=z;
//     }
//     else if(a==y)
//     {
//         b=x;
//         c=z;
//     }
//     else{
//         b= x;
//         c=y;
//     }
//     if(a*a == b*b + c*c){
//         return true;
//     }
//     else{
//         return false;
//     }
// }

// int main(){

//     int x,y,z;
//     cin>>x>>y>>z;

//     if(check(x,y,z))
//     {
//         cout<<"Pythagorus"<<endl;
//     }
//     else{
//         cout<<"Not pythagoryus"<<endl;
//     }

//     return 0;
// }

//? CONVERSIONS: BINARY TO DECIMAL

// #include<iostream>
// using namespace std;

// int binarytodecimal(int n){
//     int ans = 0;
//     int x=1;
//     while(n>0){
//         int y = n%10;
//         ans+= x*y;
//         x*=2;
//         n/=10;
//     }
//     return ans;
// }

// int main(){

//     int n;
//     cin>>n;

//     cout<<binarytodecimal(n)<<endl;

//     return 0;
// }

//? CONVERSIONS:OCTAL TO DECIMAL

// #include <iostream>
// using namespace std;

// int octaltodecimal(int n)
// {
//     int ans = 0;
//     int x = 1;
//     while (n > 0)
//     {

//         int y = n % 10;
//         ans += x * y;
//         x *= 8;
//         n /= 10;
//     }
//     return ans;
// }

// int main()
// {

//     int n;
//     cin >> n;

//     cout << octaltodecimal(n) << endl;

//     return 0;
// }

//? CONVERSIONS:HEXADECIMAL TO DECIMAL

// #include <bits/stdc++.h>
// // bits contains all header files like string vector etc
// using namespace std;

// int hexatodecimal(string n)
// {
//     int ans = 0;
//     int x = 1;
//     // base is x
//     int s = n.size();
//     // taking sizes into account which is already defioned in string
//     for (int i = s - 1; i >= 0; i--)
//     // from lastdigit to first digit
//     {
//         if (n[i] >= '0' && n[i] <= '9')
//         {
//             ans += x * (n[i] - '0');
//         }
//         else if (n[i] >= 'A' && n[i] <= 'F'){
//             ans += x * (n[i]-'A'+10);
//         }
//         x*=16;
//     }
//     return ans;
// }

// int main()
// {

//     string n;
//     cin >> n;

//     cout << hexatodecimal(n) << endl;

//     return 0;
// }
//? CONVERSIONS:DECIMAL TO BINARY

// #include <bits/stdc++.h>
// // bits contains all header files like string vector etc
// using namespace std;

// int decimaltobinary(int n)
// {
//     int x = 1;
//     int ans = 0;

//     // base is x
//     while (x <= n)
//     {
//         x *= 2;
//     }
//     x /= 2;

//     while (x > 0)
//     {
//         int lastdigit = n / x;
//         n -= lastdigit * x;
//         x /= 2;
//         ans = ans * 10 + lastdigit;
//     }
//     return ans;
// }

// int main()
// {

//     int n;
//     cin >> n;

//     cout << decimaltobinary(n) << endl;

//     return 0;
// }

//? CONVERSIONS:DECIMAL TO OCTAL


// #include <bits/stdc++.h>
// // bits contains all header files like string vector etc
// using namespace std;

// int decimaltooctal(int n)
// {
//     int x = 1;
//     int ans = 0;

//     // base is x
//     while (x <= n)
//     {
//         x *= 8;
//     }
//     x /= 8;

//     while (x > 0)
//     {
//         int lastdigit = n / x;
//         n -= lastdigit * x;
//         x /= 8;
//         ans = ans * 10 + lastdigit;
//     }
//     return ans;
// }

// int main()
// {

//     int n;
//     cin >> n;

//     cout << decimaltooctal(n) << endl;

//     return 0;
// }

//? CONVERSIONS:DECIMMAL TO HEXADECIMAL


// #include <bits/stdc++.h>
// // bits contains all header files like string vector etc
// using namespace std;

// string decimaltohexa(int n)
// {
//     int x = 1;
//     string ans = " ";\
//     while(x < n){
//         x*=16;
//     }
//     x /= 16;

//     while(x>0){
//         int lastdigit = n/x;
//         n -= lastdigit*x;
//         x /=16;

//         if(lastdigit <= 9){
//             ans = ans + to_string(lastdigit);

//         }
//         else{
//             char c = 'a' + lastdigit - 10;
//             ans.push_back(c);
//         }
//     }

   
//     return ans;
// }

// int main()
// {

//     int n;
//     cin >> n;

//     cout << decimaltohexa(n) << endl;

//     return 0;
// }


//? ADD TWO BINARY NUMBERS

// to be continued