#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double convert(double degree) {
    double pi = 3.14159265358979323846;
    return (degree * (pi / 180));
}


int main() {
    
    float lower_limit, upper_limit, inc;
    cout << "Enter the lower limit of the interval: " << endl;
    cin >> lower_limit;
    cout << "Enter the upper limit of the interval: " << endl;
    cin >> upper_limit;
    cout << "Enter the increment of each angle: " << endl;
    cin >> inc;

    cout << "The selected interval is [" << lower_limit << ", " << upper_limit << "], with an increment of " << inc << "." << endl;


    cout << "ang\tsin\t\tcos\t\ttan" << endl;
    cout << fixed << setprecision(6);

    for (float i = lower_limit; i <= upper_limit; i += inc) {
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
