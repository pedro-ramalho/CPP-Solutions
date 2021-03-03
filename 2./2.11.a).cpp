#include <iostream>
using namespace std;


int main() {

    int n, counter = 1;
    float sum = 4.0;
    
    cout << "Enter the n-th term: " << endl;
    cin >> n;

    for (float i = 3.0; i < n; i += 2.0) {
        if (counter % 2 == 0) {
            sum += 4 / i;
        }
        else {
            sum -= 4 / i;
        }
        counter += 1;
    }

    cout << "Result: " << sum;

    return 0;
}
