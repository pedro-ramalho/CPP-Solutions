#include <iostream>

using namespace std;

int main()
{
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    
    //checking for wrong types of input
    if (n1 < 0 || n2 < 0 || n3 < 0) {
        cerr << "At least one of the inputs is of incorrect type." << endl;
    }

    //conditions to build a triangle
    if (n1 + n2 > n3 && n1 + n3 > n2 && n2 + n3 > n1) { 
        cout << "It is possible to build a triangle with these sides." << endl;
    }
    else {
        cout << "It is not possible to build a triangle with these sides." << endl;
    }
     
    return 0;
}
