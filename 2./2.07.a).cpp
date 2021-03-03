#include <iostream>
using namespace std;

int main() {
	int n;
	bool prime = true;

	cout << "Enter an integer: " << endl;
	cin >> n;

	if (n < 2) { //in case the input is 0 or 1 
		prime = false;
	}
	else if (n == 2) { //in case the input is 2 
		prime = true;
	}
	else {
		for (int i = 2; i < n; i++) { //testing if the input is prime or not
			if (n % i == 0){
				prime = false;
				break;
			}
		}
	}

	if (prime == true) {
		cout << "The number " << n << " is prime." << endl;
	}
	else {
		cout << "The number " << n << " is not prime." << endl;
	}

	
	return 0;
}
