#include <iostream>
#include <iomanip>
#include <string>

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

string weekDay(int day, int month, int year) {

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

    if (ds == 0) {
        return "Saturday"; //0 should be interpreted as Saturday
    }
    else if (ds == 1) {
        return "Sunday"; //1 should be interpreted as Sunday
    }
    else if (ds == 2) { 
        return "Monday"; //2 should be interpreted as Monday
    }
    else if (ds == 3) {
        return "Tuesday"; //3 should be interpreted as Tuesday
    }
    else if (ds == 4) {
        return "Wednesday"; //4 should be interpreted as Wednesday
    }
    else if (ds == 5) {
        return "Thursday"; //5 should be interpreted as Thursday
    }
    else if (ds == 6) {
        return "Friday"; //6 should be interpreted as Friday
    }
}

void monthInterpreter(int month, string &result) {
    if (month == 1) {
        result = "January";
    }
    else if (month == 2) {
        result = "February";
    }
    else if (month == 3) {
        result = "March";
    }
    else if (month == 4) {
        result = "April";
    }
    else if (month == 5) {
        result = "May";
    }
    else if (month == 6) {
        result = "June";
    }
    else if (month == 7) {
        result = "July";
    }
    else if (month == 8) {
        result = "August";
    }
    else if (month == 9) {
        result = "September";
    }
    else if (month == 10) {
        result = "October";
    }
    else if (month == 11) {
        result = "November";
    }
    else {
        result = "December";
    }
    
}

int main() {

    int month = 1, year;
    string result;

    cout << "Enter a year: " << endl;
    cin >> year; //asking the user to input a month and a year


    while (month <= 12) {

        int days = numDays(month, year);
        monthInterpreter(month, result);
        cout << '\n';
        cout << result << " " << year << endl;
        cout << setw(5) << "Sun" << setw(5) << "Mon" << setw(5) << "Tue" << setw(5) << "Wed" << setw(5) << "Thu" << setw(5) << "Fri" << setw(5) << "Sat" << endl;
    
        for (int i = 1; i <= days; i++) {
            if (i == 1) {
                if (weekDay(i, month, year) == "Saturday") {
                    cout << setw(35) << i << endl;
                }
                else if (weekDay(i, month, year) == "Friday") {
                    cout << setw(30) << i;
                }
                else if (weekDay(i, month, year) == "Thursday") {
                    cout << setw(25) << i;
                }
                else if (weekDay(i, month, year) == "Wednesday") {
                    cout << setw(20) << i;
                }
                else if (weekDay(i, month, year) == "Tuesday") {
                    cout << setw(15) << i;
                }
                else if (weekDay(i, month, year) == "Monday") {
                    cout << setw(10) << i;
                }
                else if (weekDay(i, month, year) == "Sunday") {
                    cout << setw(5) << i;
                }
            } else {
                cout << setw(5);
                if (weekDay(i, month, year) == "Sunday") {
                    cout << i << setw(5);
                }
                else if (weekDay(i, month, year) == "Monday") {
                    cout << i << setw(5);
                }
                else if (weekDay(i, month, year) == "Tuesday") {
                    cout << i << setw(5);
                }
                else if (weekDay(i, month, year) == "Wednesday") {
                    cout << i << setw(5);
                }
                else if (weekDay(i, month, year) == "Thursday") {
                    cout << i << setw(5);
                }
                else if (weekDay(i, month, year) == "Friday") {
                    cout << i << setw(5);
                }
                else if (weekDay(i, month, year) == "Saturday") {
                    cout << i << setw(5) << endl;
                }
            }
        }

        cout << '\n';
        month++;

    }   

    return 0;
}
