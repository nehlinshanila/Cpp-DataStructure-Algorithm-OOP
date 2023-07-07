// char arrar
// #include<iostream>
// using namespace std;

// int main(){

//     char array[100] = "apple";
//     int i =0;

//     while(array[i] != '\0'){
//         cout<<array[i]<<endl;
//         i++;
//     }

//     return 0;
// }

//? input output
// #include<iostream>
// using namespace std;

// int main(){

//     char array[100];
//     cin>>array;

//     cout<<array[2];
//     return 0;
// }

// ? check palindrome

// #include<iostream>
// using namespace std;

// int main(){

//     //palindrome is racecar == racecar // char equal from opposite
//     int n;
//     cin>>n;

//     char array[n+1];
//     cin>>array;

//     bool check = 1;
//     for(int i=0; i<n; i++){
//         if(array[i]=array[n-1-i]){
//             check=0;
//             break;
//         }
//     }
//     if(check == true){
//         cout<<"word is palindrome"<<endl;
//     }
//     else{
//         cout<<"word is not plaindrome"<<endl;
//     }

//     return 0;
// }

// ? largest word in a sentence

#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    cin.ignore();

    char arr[n + 1];

    // getline will input full sentence. wont reject space
    cin.getline(arr, n);
    // to clear buffer
    cin.ignore();

    int i = 0;
    int currLen = 0;
    int maxLen = 0;
    int st=0, maxst=0;

    while (1)
    {
        if (arr[1] == ' ' || arr[i] == '\0')
        {
            if (currLen > maxLen)
            {
                maxLen = currLen;
                maxst = st;
            }
            currLen = 0;
            st = i+1;
        }
        else
        {
            currLen++;
        }
        if (arr[i] == '\0')
        {
            break;
        }
    }
    cout << maxLen << endl;
    for(int i=0;i<maxLen;i++){
        cout<<arr[i+maxst];
    }

    return 0;
}