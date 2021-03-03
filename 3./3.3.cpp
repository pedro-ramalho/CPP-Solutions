#include <iostream>
#include <cmath>
using namespace std;


float square_root(float n, float delta, int nMaxInter){
    int iterations = 0; //initial number of iterations
    float rq = 1.0;  //initial guess

    while (true) {
        float rqn = (rq + n / rq); //new guess
        float dif = pow(rq, 2) - n; //difference between diff^2 and the input number n

        if (abs(dif) < delta || iterations == nMaxInter) { //condition to leave the while statement
            break;
        }
        rq = (rq + n / rq) / 2; //changing the initial guess
        iterations++; //incrementing the iterations variable
    }
    return rq; //returning sqrt(n) 
}


int main() {
    
    float n, delta;
    int nMaxInter;

    cout << "Enter a number: " << endl; 
    cin >> n; //asking the user for a number
    cout << "Enter the desired precision: " << endl;
    cin >> delta; //asking the user for a precision
    cout << "Enter the maximum number of iterations: " << endl;
    cin >> nMaxInter; //asking the user for a maximum number of iterations
    cout << "The square root of " << n << " is " << square_root(n, delta, nMaxInter) << endl;
    
    return 0;
}
