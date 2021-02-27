#include <iostream>
using namespace std;

int main() {
	float a, b, c, d, e, f;
	cout << "Given a linear system of equations of the type: " << endl;
	cout << "ax + by = c" << endl;
	cout << "dx + ey = f" << endl;
	cout << "Type in the coeficients: " << endl;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c;
	cout << "d = ";
	cin >> d;
	cout << "e = ";
	cin >> e;
	cout << "f = ";
	cin >> f;
	cout << "Output: " << endl;
	cout << a << "x + " << b << "y = " << c << endl;
	cout << d << "x + " << e << "y = " << f << endl;
	cout << "Solutions: " << endl;
	if ((a * e - b * d) == 0) {
		cout << "The system has infinite solutions.";
	}
	else {
		float x = (c * e - b * f) / (a * e - b * d);
		float y = (a * f - c * d) / (a * e - b * d);
		cout << "x = " << x << endl;
		cout << "y = " << y << endl;
	}
	return 0;
}
