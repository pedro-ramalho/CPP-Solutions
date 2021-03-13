#include <iostream>

using namespace std;

int gcd(int n1, int n2) {
	if (n1 % n2 == 0) {
		return n2;
	}
	else {
		return gcd(n2, n1 % n2);
	}
}

int main() {
	int n1, n2;
	cout << "Enter two numbers please: " << endl;
	cin >> n1 >> n2;
	cout << "The greatest common divisor between them is: " << gcd(n1, n2) << endl;
	return 0;
}
