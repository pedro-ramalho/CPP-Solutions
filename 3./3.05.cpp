#include<iostream>

using namespace std;

int gcd(int n1, int n2) {
	if (n1 == n2) { //first condition
		return n1;
	} 
	if (n1 == 0) { //second condition; if any of them is zero, return the other one
		return n2;
	}
	else if (n2 == 0) {
		return n1;
	}
	else {
		if (n1 > n2) { //third condition; subtract the largest from the smallest until both of them are equal
			while (n1 > n2) {
				n1 -= n2;
			}
			while (n2 > n1) { //vice-versa
				n2 -= n1;
			}
		}
		else if (n2 > n1) { //third condition but for the other number
			while (n2 > n1) {
				n2 -= n1;
			} while (n1 > n2) {
				n1 -= n2;
			}
		}
	}
	return n1; //return statement
}

int main() {
	int n1, n2; //initial variables

	cout << "Enter two integers: " << endl;
	cin >> n1 >> n2; //asking the user for input
	cout << "The greatest common divisor between " << n1 << " and " << n2 << " is " << gcd(n1, n2) << endl; //outputting the greatest common divisor between them

	return 0;
}
