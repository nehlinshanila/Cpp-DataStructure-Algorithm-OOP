#include<iostream>
using namespace std;

int main(){

    // int a=10;
    // int* aptr=&a;

    // cout<<*aptr<<endl;
    // *aptr=20;
    // cout<<a<<endl;


//? pointer using array
    // int arr[]={10,20,30};
    // cout<<*arr<<endl;   

    // int *ptr=arr;
    // for(int i=0;i<3;i++){
    //     cout<<*(arr+i)<<endl;
    //     //arr++; //illegal
    // } 

    int a=2;
    int b=4;

    int *aptr=&a;
    int *bptr=&b;

    swap(aptr,bptr);
    cout<<a <<" "<<b<<endl;

    return 0;
}

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
} 