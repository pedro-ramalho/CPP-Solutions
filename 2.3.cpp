#include <iostream>
#include <limits>
using namespace std;


int main()
{
    int n1, n2;
    cin >> n1 >> n2;

    if (n1 + n2 > INT_MAX) { //checking for sum overflow
        cout << "sum overflow";
    }
    else if (n1 + n2 < INT_MIN) { //checking for sum underflow
        cout << "sum underflow";
    }
    else {
        cout << n1 + n2; //in case both tests fail, print the sum of n1 and n2
    }
     
    return 0;
}
