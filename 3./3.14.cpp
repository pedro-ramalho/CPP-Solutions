#include <iostream>
#include <cmath>
using namespace std;

double g(double x) {
	return pow(x, 2);
}

double h(double x) {
	return sqrt(4 - pow(x, 2));
}

double integrateTR(double f(double), double a, double b, int n) {

	double area = 0;
	double h = (double) (b - a) / n;
	for (int i = 1; i <= n; i++) {
		area += (h / 2) * (f(a + (i - 1) * h) + f(a + i * h));
	}

	return area;

}

int main() {
	double a = 0, b = 10;
	int n;

	cout << "Choose the number of partitions: " << endl;
	cin >> n;
	cout << "Integral of g(x) = x^2 when a = 0 and b = 10: " << integrateTR(g, a, b, n) << endl;

	double c = -2, d = 2;
	cout << "Integral of h(x) = sqrt(4 - pow(x, 2)) when a = -2 and b = 2: " << integrateTR(h, c, d, n) << endl;

	return 0;
}
