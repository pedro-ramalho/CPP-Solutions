#include <iostream>
using namespace std;


bool is_leap(int year) {
    if (year % 4 == 0 && year % 100 != 0) { //first condition
        return true;
    }
    else {
        if (year % 100 == 0) { //second condition
            if (year % 400 == 0) {
                return true;
            }
            else {
                return false;
            }
        }
    }
    return false;
}


int main() {
    
    int year;
    cout << "Enter a year: " << endl;
    cin >> year; //asking the user to input a year
    if (is_leap(year)) {
        cout << "The year " << year << " is a leap year." << endl;
    }
    else {
        cout << "The year " << year << " is not a leap year." << endl;
    }
    return 0;
}
