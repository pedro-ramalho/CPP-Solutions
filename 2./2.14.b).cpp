#include <iostream> 
#include <iomanip>
using namespace std;


int main() {
    
	double n, delta; //we will calculate sqrt(n) and use delta as the precision
	int nMaxIter, iterations = 0; //maximum number of iterations

	cout << "Enter a number: " << endl;
	cin >> n; //asking the user for input
	cout << "Enter the precision: " << endl;
	cin >> delta; //asking the user for the precision
	cout << "Enter the maximum number of iterations: " << endl;
	cin >> nMaxIter; //asking the user for the maximum number of iterations

	float rq = 1.0; //initial guess (always starts at 1)

	while (true) {
		float rqn = (rq + n / rq); //new guess calculated using the initial guess
		float dif = pow(rq, 2) - n; //difference between new guess and initial guess

		if (abs(dif) < delta || iterations == nMaxIter) { //conditions to leave the while statement
			break;
		}
		rq = (rq + n / rq) / 2; //calculating a new initial guess
		iterations += 1; //incrementing the iterations variable
	}

	int decimal = 0;
	while (delta < 1) { //a while statement to find the number of decimal places of delta
		delta *= 10;	
		decimal++;
	}

	cout << "The square root of " << n << " is " << fixed << setprecision(decimal) << rq << endl; //printing the result

	return 0;
}
