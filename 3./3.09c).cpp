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

    if (month == 2) {
        if (is_leap(year)) {
            return 29;
        }
        else {
            return 28;
        }
    }

    if (month % 2 == 0) {
        return 30;
    }
    else {
        return 31;
    }

}

int weekDay(int day, int month, int year) {

    int ds, m = month, s, a, c;
    s = year / 100; //finding out the first 2 digits of the year
    a = year % 100; //finding out the last 2 digits of the year

    if (m == 1) { //atributting values to c
        if (is_leap(year))
            c = 6;
        else
            c = 0;
    }
    else if (m == 2) {
        if (is_leap(year))
            c = 2;
        else
            c = 3;
    }
    else if (m == 3 || m == 11)
        c = 3;
    else if (m == 4 || m == 7)
        c = 6;
    else if (m == 5)
        c = 1;
    else if (m == 6)
        c = 4;
    else if (m == 8)
        c = 2;
    else if (m == 9 || m == 12)
        c = 5;
    else if (m == 10)
        c = 0;

    ds = int(int(5 * a / 4) + c + day - 2 * (s % 4) + 7) % 7; //calculating ds

    return ds;
}

int main() {

    int day, month, year;
    char separator;

    cout << "Enter a date (DD/MM/YY format): " << endl;
    cin >> day >> separator >> month >> separator >> year;
    cout << "The corresponding day of the week is: " << weekDay(day, month, year);

    return 0;
}
