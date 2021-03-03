#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double convert(double degree) {
    double pi = 3.14159265358979323846;
    return (degree * (pi / 180));
}


int main() {
    
    cout << "ang\tsin\t\tcos\t\ttan" << endl;
    cout << fixed << setprecision(6);

    for (int i = 0; i <= 90; i += 15) {
        cout << i << "\t" << sin(convert(i)) << "\t" << cos(convert(i)) << "\t";
        if (i == 90) {
            cout << "infinite" << endl;
        }
        else {
            cout << tan(convert(i)) << endl;
        }
    }

    return 0;
}
