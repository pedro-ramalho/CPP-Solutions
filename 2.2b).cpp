#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n1, n2, n3;
	cin >> n1 >> n2 >> n3;
	int myNum[3] = { n1, n2, n3 };
	sort(myNum, myNum+3, greater<int>());

	for (int i = 0; i < 3; i++) {
		cout << myNum[i] << " ";
	}
	return 0;
}
