#include <iostream>
#include <cmath>
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

    int n, counter = 1;
    float x, sum = 1.0;

    cout << "Enter the n-th term: " << endl;
    cin >> n;
    cout << "Enter the value for x: " << endl;
    cin >> x;

    for (int i = 1; i < n; i++) {
        long double term = pow(x, i) / factorial(i);

        if (counter % 2 == 0) {
            sum += term;
        }
        else {
            sum -= term;
        }
        counter += 1;
    }

    cout << "Result: " << sum;

    return 0;
}
