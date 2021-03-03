#include <iostream>
#include <cmath>
using namespace std;

double distance(double x1, double y1, double x2, double y2) {

    double result = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)); //calculates the distance between P(x1, y1) and Q(x2, y2)
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

int main() {
    
    double x1, y1, x2, y2, x3, y3; //coordinates of the vertice
    cout << "Enter the coordinates of the first vertice (<x y>): " << endl; 
    cin >> x1 >> y1; //asks the user for input of P(x1, y1)
    cout << "Enter the coordinates of the second vertice (<x y>): " << endl;
    cin >> x2 >> y2; //asks the user for input of Q(x2, y2)
    cout << "Enter the coordinates of the third vertice (<x y>): " << endl;
    cin >> x3 >> y3; //asks the user for input of R(x3, y3)
    cout << "The area of the triangle is " << area(x1, y1, x2, y2, x3, y3) << endl;

    return 0;
}
