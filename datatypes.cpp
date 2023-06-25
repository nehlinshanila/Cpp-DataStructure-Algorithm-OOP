#include<iostream>
using namespace std;


// to print datatypes in their byte sizes
int main(){

    int a; //variable declaration
    a=12; //variable initialization

    cout<<"size of int: "<<sizeof(a)<<endl; //print variable

    float b; 
    cout<<"size of float: "<<sizeof(b)<<endl; //print variable

    char c;
    cout<<"size of char: "<<sizeof(c)<<endl;

    bool d;
    cout<<"size of bool: "<<sizeof(d)<<endl;

// declaring type modifiers/ modify length of datatype
    short int si;
    long int li;
    cout<<"size of int: "<<sizeof(si)<<endl;
    cout<<"size of long int: "<<sizeof(li)<<endl;

    return 0;
}