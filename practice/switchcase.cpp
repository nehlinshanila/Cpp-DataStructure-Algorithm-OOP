#include <iostream>
using namespace std;

//? MULTIPLE FOR LOOPS IS TOO LENGHTY SO WE WILL USE SWITCH NEXT
// int main(){

//     char button;
//     // initialize a variable
//     cout << "input a character" << endl;
//     cin >> button;

//     // inside statements a char needs to be in first string ''
//     if(button=='a'){
//         cout << "a" << endl;
//     }
//     else if(button=='b'){
//         cout << "b" << endl;
//     }
//     else if(button=='c'){
//         cout << "c" << endl;
//     }
//     else if(button=='d'){
//         cout << "d" << endl;
//     }
//     else if(button=='e'){
//         cout << "e" << endl;
//     }
//     else if(button=='f'){
//         cout << "f" << endl;
//     }
//     else{
//         cout << "rest" << endl;
//     }

//     return 0;
// }

//? USING SWITCH NOW

// int main()
// {

//     char button;
//     // initialize a variable
//     cout << "input a character" << endl;
//     cin >> button;

//     switch (button)
//     // mention name of variable like button
//     // start the switch like for loop
//     {
//     case 'a':
//         // this is where we input the one we are comparing to
//         cout << "a" << endl;
//         break;
//     case 'b':
//         cout << "b" << endl;
//         break;
//     case 'c':
//         cout << "c" << endl;
//         break;
//     case 'd':
//         cout << "d" << endl;
//         break;
//     case 'e':
//         cout << "e" << endl;
//         break;
//     case 'f':
//         cout << "f" << endl;
//         break;

//     default:
//     // default is like else statement. if doesnt match with rest then do this
//     cout<<"rest"<<endl;
//         break;
//     }

//     return 0;
// }

//? if we dont use break at all then everything will be outputted after that
// int main()
// {

//     char button;
//     // initialize a variable
//     cout << "input a character" << endl;
//     cin >> button;

//     switch (button)
//     // mention name of variable like button
//     // start the switch like for loop
//     {
//     case 'a':
//         // this is where we input the one we are comparing to
//         cout << "a" << endl;
//     case 'b':
//         cout << "b" << endl;
//     case 'c':
//         cout << "c" << endl;
//     case 'd':
//         cout << "d" << endl;
//     case 'e':
//         cout << "e" << endl;
//     case 'f':
//         cout << "f" << endl;

//     default:
//     // default is like else statement. if doesnt match with rest then do this
//     cout<<"rest"<<endl;
//     }

//     return 0;
// }

//? MAKE A SIMPLE CALCULATOR

int main()
{

    float a, b;
    // can be int as well or double
    char op; 
    // op is operator
    // initialize a variable
    cout << "input two numbers" << endl;
    cin >> a >> b;
    cout << "give operator" << endl;
    cin >> op;

    switch (op)
    // mention name of variable like button
    // start the switch like for loop
    {
    case '+':
        // this is where we input the one we are comparing to
        cout << a+b << endl;
        break;
    case '-':
        cout << a-b << endl;
        break;
    case '/':
        cout << a/b << endl;
        break;
    case '*':
        cout << a*b << endl;
        break;


    default:
        // default is like else statement. if doesnt match with rest then do this
        cout << "not applicable" << endl;
        break;
    }

    return 0;
}