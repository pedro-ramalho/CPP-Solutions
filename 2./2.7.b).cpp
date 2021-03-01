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
	
	for (int i = 0; i < 1000; i++) {
		if (prime(i)) {
			cout << i << endl;
		}
	}

	return 0;
}
