  
#include <iostream>
using namespace std;

bool prime(int n) {

	if (n < 2) {
		return false;
	}
	else if (n == 2) {
		return true;
	}
	else {
		for (int i = 2; i < n; i++) {
			if (n % i == 0) {
				return false;
			}
		}
	}

	return true;
}

int main() {
  int counter = 0, n = 0;

	while (counter != 100) {
		if (prime(n)) {
			cout << n << endl;
			counter++;
		}
		n++;
	}

	return 0;
}
