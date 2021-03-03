#include <iostream>
#include <math.h>;
using namespace std;

int main()
{
	float x1, y1;
	float x2, y2;
	float x3, y3;
	cout << "Enter the coordinates of the 3 vertices of the triangle in the format <x y>: " << endl;
	cout << "Vertice 1: ";
	cin >> x1 >> y1;
	cout << "Vertice 2: ";
	cin >> x2 >> y2;
	cout << "Vertice 3: ";
	cin >> x3 >> y3;
	
	float side_a = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	float side_b = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
	float side_c = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
	cout << "The sides of the triangle are: " << side_a << " " << side_b << " " << side_c << endl;
	float s = (side_a + side_b + side_c) / 2;
	cout << "The semi_perimeter of the triangle is: " << s << endl;
	float area = sqrt(s * (s - side_a) * (s - side_b) * (s - side_c));
	cout << "The area of the triangle is: " << area;
	return 0;
}
