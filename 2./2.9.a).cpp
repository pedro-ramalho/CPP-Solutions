#include <iostream>
using namespace std;


int main() {
    
    int n, digit, reversed = 0;
    cin >> n; //asking for input
    int aux = n; 
    cout << "Enter an integer: " << endl;
 
    while (aux != 0) { //breaking down each digit of the integer seperately
        int digit = aux % 10;
        reversed = (10 * reversed) + digit; //calculating it's reverse
        aux = aux / 10;
    }
    
    if (reversed == n) { //condition for palindrome
        cout << "The number " << n << " is a palindrome." << endl;
    }
    else {
        cout << "The number " << n << " is not a palindrome." << endl;
    }

    return 0;
}
