#include <iostream>
#include <vector>
#include <math.h>
using namespace std;


int main() {

    int n;
    vector <int> factors;
    
    cin >> n;
    while (n % 2 == 0) {
        factors.push_back(2);
        n = n / 2;
    }

    for (int i = 3; i <= sqrt(n); i = i + 2) {
        while (n % i == 0) {
            factors.push_back(i);
            n = n / i;
        }
    }

    if (n > 2) {
        factors.push_back(n);
    }

    int length = factors.size();

    for (int j = 0; j < length; j++) {
        if (j < length - 1) {
            cout << factors[j] << "x";
        }
        else {
            cout << factors[j];
        }
    }

    return 0;
}
