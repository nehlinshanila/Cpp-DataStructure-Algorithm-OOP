#include <iostream>
using namespace std;

// mom gives me about x money and i want to input x. dad gives me y money and i want to input y
int main()
{

    int x;
    cin >> x;
    // whatever input we insert will be stored in variable x
    // << is insertion operator and >> is extraction operator
    int y;
    cin >> y;

    // now we want to find sum so we take a variable and name it sum
    int sum = x + y;
    cout << "sum\n";
    cout << sum;
    // we could also use endl here which means end line instead of \n

    return 0;
}