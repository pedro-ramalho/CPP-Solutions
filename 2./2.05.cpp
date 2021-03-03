#include <iostream>
#include <cmath>
using namespace std;

int main() {
	float A, B, C;
	float s1, s2;
	cout << "Solution of Ax^2 + Bx + C = 0" << endl;
	cout << "Insert the coefficients (A B C): ";
	cin >> A >> B >> C;

	if (pow(B, 2) - 4 * A * C > 0) {
		s1 = (-1 * B + sqrt((pow(B, 2) - 4 * A * C)) / (2 * A));
		s2 = (-1 * B - sqrt((pow(B, 2) - 4 * A * C)) / (2 * A));
		cout << "The equation has 2 different real roots: " << s1 << " and " << s2 << endl;
	}
	else if (pow(B, 2) - 4 * A * C == 0) {
		s1 = (-1 * B / (2 * A));
		cout << "The equation has 2 equal roots: " << s1 << endl;
	}
	else if (pow(B, 2) - 4 * A * C < 0) {
		float complex = sqrt((pow(B, 2) - 4 * A * -1* C));
		float aux_s1 = -1 * B / (2 * A);
		cout << "The equation has 2 complex roots: " << aux_s1 << " + " << complex/(2*A) << "i and " << aux_s1 << " - " << complex/(2*A) << "i" << endl;
	}

	return 0;
}
