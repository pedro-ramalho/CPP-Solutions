#include <iostream>
using namespace std;

int main() {
	int weight;
	float cost;
	cout << "Enter the weight of the merchandise (grams): " << endl;
	cin >> weight;
	if (weight <= 500) {
		cout << "The cost of transportation is equal to: " << 5 << " euros." << endl;
	}
	else if (weight >= 501 && weight <= 1000) {
		cost = 5 + 1.5 * ((weight - 500) / 100);
		cout << "The cost of transportation is equal to: " << cost << " euros." << endl;
	}
	else if (weight > 1000){
		cost = 12.5 + 5 * ((weight - 1000) / 250);
		cout << "The cost of transportation is equal to: " << cost << " euros." << endl;
	}
	return 0;
}
