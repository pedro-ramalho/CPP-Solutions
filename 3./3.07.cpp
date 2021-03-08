#include <iostream>

using namespace std;

bool readInt(int& x) {
	cin >> x;

	/*if cin is in an invalide state
	or has anything else other than a digit
	inside the buffer, then the input is invalid*/
	if (!cin || !(isdigit(cin.peek()) || cin.peek() == '\n')) { 
		cin.clear();                               
		cin.ignore(10000, '\n'); //we must then clear the buffer and return false
		return false;
	}

	/*if neither of the conditions above are met,
	then the input is valid*/
	else {
		cin.clear(); 
		cin.ignore(10000, '\n'); //we must then clear the buffer and return true
		return true;
	}
}

int main() {
	int n;

	if (readInt(n)) {
		cout << "The input is valid." << endl;
	}
	else {
		cout << "The input is invalid." << endl;
	}
	
	return 0;
}
