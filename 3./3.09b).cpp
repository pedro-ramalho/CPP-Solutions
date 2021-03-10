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

int numDays(int month, int year) {
    if (is_leap(year)) {
        if (month == 4 || month == 6 || month == 9 || month == 11) { //months with 30 days
            return 30;
        }
        else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) { //months with 31 days
            return 31;
        }
        else if (month == 2) { //february in a leap year
            return 29;
        }
    }
    else {
        if (month == 4 || month == 6 || month == 9 || month == 11) { //months with 30 days
            return 30;
        }
        else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) { //months with 31 days
            return 31;
        }
        else if (month == 2) { //february in a non-leap year
            return 28;
        }
    }
}


int main() {
    
    int year, month;

    cout << "Enter a month and a year, respectively: " << endl;
    cin >> month; //asking the user to input a numerical representation of a month
    cin >> year; //asking the user to input a year
    cout << "The number of days in that month is " << numDays(month, year);

    return 0;
}
