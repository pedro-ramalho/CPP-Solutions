#include <iostream>
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

void reduceFraction(int& numerator, int& denominator) {

	int aux = gcd(numerator, denominator); //getting the greatest common divisor between the numerator and the denominator
	numerator = numerator / aux; //diving the numerator by the GCD
	denominator = denominator / aux; //dividing the denominator by the GCD
	//this is done in order to reduce the fraction to it's simplest form

}



int main() {
	
	int n1, n2;
	char separator;
	
	cout << "Enter a fraction: " << endl; 
	cin >> n1 >> separator >> n2; //asking the user for an input

	reduceFraction(n1, n2); //reducing the fraction

	cout << "The initial fraction can be reduced to " << n1 << separator << n2 << endl;

	return 0;
}
