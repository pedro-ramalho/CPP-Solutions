#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.1459;

double distance(double x1, double y1, double x2, double y2) {
	double result = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
	return result;
}

double area(double radius) {
	double result = PI * pow(radius, 2);
	return result;
}

double area(double x1, double y1, double x2, double y2, double x3, double y3) {

    //calculates the distance between P(x1, y1), Q(x2, y2) and R(x3, y3)
    double side_a = distance(x1, y1, x2, y2);
    double side_b = distance(x1, y1, x3, y3);
    double side_c = distance(x2, y2, x3, y3);

    float s = (side_a + side_b + side_c) / 2; //calculates the semi perimeter of the triangle
    float result = sqrt(s * (s - side_a) * (s - side_b) * (s - side_c)); //calculates the area of the triangle
    return result;
}

double area(double x1, double y1, double x2, double y2) {
    double height = abs(y1 - y2);
    double width = abs(x1 - x2);
    double result = height * width;
    return result;
}

int main() {
    double radius, x1, y1, x2, y2, x3, y3;

    cout << "Enter the radius: " << endl;
    cin >> radius;
    cout << "Enter the first vertice: " << endl;
    cin >> x1 >> y1;
    cout << "Enter the second vertice: " << endl;
    cin >> x2 >> y2;
    cout << "Enter the third vertice: " << endl;
    cin >> x3 >> y3;

    cout << "Area of the circle: " << area(radius) << endl;
    cout << "Area of the triangle: " << area(x1, y1, x2, y2, x3, y3) << endl;
    cout << "Area of the rectangle: " << area(x1, y1, x2, y2) << endl;

    return 0;
}
