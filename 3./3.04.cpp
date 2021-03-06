#include<iostream>
#include<iomanip>

using namespace std;

int main() {
    double x;
    unsigned int n;
    cout << "Enter the number you want to round: " << endl;
    cin >> x;
    cout << "Enter the number of decimal places: " << endl;
    cin >> n;
    cout << fixed << setprecision(n) << x << endl;
    return 0;
}
