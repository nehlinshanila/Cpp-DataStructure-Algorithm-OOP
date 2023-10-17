#include <iostream>
using namespace std;

int main()
{

    //? declaring a string
    // string str;
    // string str1(5, 'n');
    // cout<<str1<<endl;

    //?
    // string str;
    // getline(cin, str);
    // // cin >> str;
    // // will only print first word
    // cout<<str<<endl;

    //?
    // string str;

    // string s1 = "fam";
    // string s2 = "ily";
    // will add both the string together
    // s1.append(s2);
    // cout<<s1 + s2<<endl;
    // // + s2 will do the same thing

    // s1 = s1 + s2;
    // cout << s1 << endl;

    // ? if we wanna access the other char of s1

    // cout<< s1[1]<<endl;

    //? clear function
    // string abc = "uesjkaddwio";
    // abc.clear();
    // // to clear everything
    // cout<< abc << endl;

    // string s1 = "abc";
    // string s2 = "xyz";

    // if(s1.compare(s2) == 0){
    //     cout<< "strings are equal"<< endl;
    // }
    // cout<< s2.compare(s1) << endl;

    //? erase funciton
    // string s1 = "nincommnsojsd";
    // s1.erase(3, 2);
    // // 3rd position 2 digit removed
    // cout << s1 << endl;

    //? find function
    // string s1 = "nincomboopppooop";
    // cout << s1.find("poo") << endl;

    //? insert function
    string s1 = "nincombopoooop";

    s1.insert(2, "lol");
    // inserting lol in 2nd digit
    cout << s1 << endl;

    return 0;
}