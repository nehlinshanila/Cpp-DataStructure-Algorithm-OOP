#include<iostream>
using namespace std;


//? FOR LOOP // FIND ADDITION OF ALL THE NUMBERS FROM 1 TO N

// int main(){
//     // user gives me a random number n
//     int n;
//     cin>>n;

//     // here in variable sum ill be storing sum uptil n
//     int sum = 0; 
//     for(int counter = 1; counter<=n; counter++){
//     // counter = 1 means starting from 1 //initialization
//     // counter<=n means condition that we will run counter until its less than equal to n. else get out of loop
//     //counter++ means update counter
//     sum=sum+counter;
//     }
//     cout<<sum;

//     return 0;
// }


//?WHILE LOOP //KEEP TAKING INPUT UNTIL USER GIVES -VE NUM 

// int main(){
//     int n;
//     cin>>n;
//     // first take input from  user
//     while(n>0){ 
//         // until n is greater than zero or positive, keep printing
//         cout<<n<<endl;
//         // give out result is positive
//         // else terminate loop 
//         cin>>n;
//         // take input again after positive
//     }
//     return 0;
// }


//?DO WHILE // TAKE NUM UNTIL USER GIVES -VE

int main(){
    int n;
    cin>>n;

    do{

        cout<<n<<endl;
        cin>>n;

    }while(n>0);

    return 0;
}
// problem here is its gonna print negative num the first time if 1st one is -ve