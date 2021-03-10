#include <iostream>
using namespace std;

bool readFraction(int& numerator, int& denominator) {
	bool valid_input = true;
	char separator;

	cin >> numerator;
	if (cin.fail()) //if the numerator is not an integer
		valid_input = false;

	cin >> separator; //if the separator is not '/'
	if (separator != '/')
		valid_input = false;

	cin >> denominator; //if the denominator is not an integer
	if (cin.fail())
		valid_input = false;

	if (valid_input) { //returning conditions
		return true;
	}
	else {
		return false;
	}

}

int main() {
	int n1, n2;
	if (readFraction(n1, n2)) {
		cout << "Everything OK!" << endl;
	}
	else {
		cout << "Wrong inputs!" << endl;
	}
	return 0;
}
