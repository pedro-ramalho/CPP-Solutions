#include <iostream>
#include <cmath>
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


void addFraction(int x1, int x2, int y1, int y2, int &numerator, int &denominator) {

	int aux;
	if (x2 == y2) { //if both denominators are equal, we just need to add the numerators
		numerator = x1 + y1;
		denominator = x2;
		aux = gcd(numerator, denominator); //then, to simplify the fraction, we'll divide it by the GCD between the numerator and the denominator
		numerator /= aux;
		denominator /= aux;
	}
	else {
		numerator = (x1 * y2) + (y1 * x2); //if the denominators are different, we must first reduce the fractions to a common denominator
		denominator = x2 * y2;
		aux = gcd(numerator, denominator); //then we apply the same method mentioned above
		numerator /= aux;
		denominator /= aux;
	}
}

void subFraction(int x1, int x2, int y1, int y2, int& numerator, int& denominator) {

	int aux;
	if (x2 == y2) { //if both denominators are equal, we just need to subtract the numerators
		numerator = x1 - y1; 
		denominator = x2;
		aux = gcd(abs(numerator), abs(denominator)); //then, to simplify the fraction, we'll divide it by the GCD between the numerator and the denominator
		numerator /= aux;
		denominator /= aux;
	}
	else {
		numerator = (x1 * y2) - (y1 * x2); //if the denominators are different, we must first reduce the fractions to a common denominator
		denominator = x2 * y2;
		aux = gcd(abs(numerator), abs(denominator)); //then we apply the same method mentioned above
		numerator /= aux;
		denominator /= aux;  
	}
}

void multFraction(int x1, int x2, int y1, int y2, int& numerator, int& denominator) {

	numerator = x1 * y1; //multiply the numerators
	denominator = x2 * y2; //multiply the denominators
	int aux = gcd(numerator, denominator); //simplify the result by dividing the numerator and the denominator by their GCD
	numerator /= aux;
	denominator /= aux;

}

void divFraction(int x1, int x2, int y1, int y2, int& numerator, int& denominator) {

	numerator = x1 * y2; 
	denominator = x2 * y1;
	int aux = gcd(numerator, denominator); //simplify the result by dividing the numerator and the denominator by their GCD
	numerator /= aux;
	denominator /= aux;

}

int main() {

	int num1, den1, num2, den2;
	int numerator, denominator;
	char separator, operation;

	cout << "Enter the operation between two fractions of your choice: " << endl;
	cin >> num1 >> separator >> den1 >> operation >> num2 >> separator >> den2; //asking the user to input the operation <fraction1> *operator* <fraction2>

	if (separator != '/' || !readFraction(num1, den1) || !readFraction(num2, den2)) //in case any of the fraction inputs is invalid
		cerr << "Your fraction input is invalid!" << endl;
	
	if (operation == '+') { //if the user wants to add the fractions
		addFraction(num1, den1, num2, den2, numerator, denominator);
		cout << "The simplified result of your operation is: " << numerator << separator << denominator << endl;
	}
	else if (operation == '-') { //if the user wants to subtract the fractions
		subFraction(num1, den1, num2, den2, numerator, denominator);
		cout << "The simplified result of your operation is: " << numerator << separator << denominator << endl;
	}
	else if (operation == '*') { //if the user wants to multiply the fractions
		multFraction(num1, den1, num2, den2, numerator, denominator);
		cout << "The simplified result of your operation is: " << numerator << separator << denominator << endl;
	}
	else if (operation == '/') { //if the user wants to divide the fractions
		divFraction(num1, den1, num2, den2, numerator, denominator);
		cout << "The simplified result of your operation is: " << numerator << separator << denominator << endl;
	}
	else {
		cerr << "You have input an invalid operation!" << endl; //if the user input an invalid operation
	}

	return 0;
}
