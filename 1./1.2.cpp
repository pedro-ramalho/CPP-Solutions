#include <iostream>
using namespace std;

int main() {
	float A, B, C;
	cout << "Please, input 3 integer numbers" << endl; // inputs 3 integers, A, B and C
	cout << "A ? ";
	cin >> A;
	cout << "B ? ";
	cin >> B;
	cout << "C ? ";
	cin >> C;
	float mean = (A + B + C) / 3; // calculates the mean of A, B and C
	cout << "mean = " << mean << endl;
	cout << "A-mean = " << A - mean << endl;
	cout << "B-mean = " << B - mean << endl;
	cout << "C-mean = " << C - mean << endl;
	return 0;
}
