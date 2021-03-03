#include <iostream>
#include <cmath>
using namespace std;


bool isPrime(int n) {
    if (n < 2) { //if n is 0 or 1 return false since neither of them is a prime number
        return false;
    }
    else if (n == 2) { //if n is 2 then return 2 since 2 is prime
        return true;
    }
    else {
        for (int i = 2; i < n; i++) {
            if (n % i == 0) { //if n has any divisor which is not 1 or itself, then it's not a prime number
                return false;
                break;
            }
        }
    }
    return true; 
}


int main() {
    
    int n;
    cout << "Enter a number: " << endl; 
    cin >> n; //asking the user for input
    if (isPrime(n)) {
        cout << "The number " << n << " is prime." << endl; //if the number is prime
    }
    else {
        cout << "The number " << n << " is not prime." << endl; //if the number is not prime
    }

    return 0;
}
