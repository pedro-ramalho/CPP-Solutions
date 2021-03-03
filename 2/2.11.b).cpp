#include <iostream>
using namespace std;


int factorial(int n) {
    
    int f = 1;
    if (n < 0) {
        cerr << "Wrong input type!" << endl;
    }
    
    for (int i = 1; i <= n; i++) {
        f *= i;
    }
    
    return f;
}

int main() {

    int n;
    float sum = 0;

    cout << "Choose the n-th term: " << endl;
    cin >> n;

    for (int i = 0; i < n; i++) {
        sum += 1.0 / factorial(i);
    }

    cout << "Result: " << sum;

    return 0;
}
