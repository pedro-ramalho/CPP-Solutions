#include <iostream>
#include <ctime>

using namespace std;

time_t timeElapsed() {
	double clock = time(NULL);
	return clock;
}

int main() {
	double start, end; //start and end variables for the clock
	char key1, key2; //keys pressed by the user

	cout << "Press any key to start the clock: " << endl;
	cin >> key1;
	start = timeElapsed(); //starting the clock
	cout << "The clock has started" << endl;

	cout << "Press any key to stop the clock: " << endl;
	cin >> key2;
	end = timeElapsed(); //stopping the clock
	cout << "The clock has stopped" << endl;

	cout << "Total amount of time: " << (end - start) << endl; //calculating the total amount of time

	return 0;
}
