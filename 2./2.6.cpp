#include <iostream>
using namespace std;

int main() {
	int n; // years after the deposit
	float q, j; // initial quantity & annual interest rate, respectively

	cout << "Enter the duration of the deposit in years: " << endl;
	cin >> n;
	cout << "Enter the deposit amount in euros: " << endl;
	cin >> q;
	cout << "Enter the annual interest rate (e.g: 2%): " << endl;
	cin >> j;

	for (int i = 0; i < n; i++) {
		q *= (1 + j / 100);
	}
	
	cout << "You will be able to withdraw a total of " << q << " euros." << endl;

	return 0;
}
