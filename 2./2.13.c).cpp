#include <iostream> 
#include <vector>
#include <algorithm>
using namespace std;


int main() {

	int n, sum = 0, length = 0; //sum of all numbers and length of the sequence
	vector <int> nums; //vector to store the numbers

	cout << "Enter any integers of your choice. If you want to leave, press CTRL-Z." << endl;

	while (true) {
		cin >> n; //asking the user for input

		if (cin.eof()) { //condition to leave the while statement 
			break;
		}

		nums.push_back(n); //pushing each number <n> into the vector
		sum += n; //adding each number
		length += 1; //adding 1 to the length of the sequence for each input the user gives
	}

	sort(nums.begin(), nums.end()); //sorting the vector 
	float mean = (float)sum / length; //calculating the mean

	cout << "Smallest number: " << nums[0] << endl;
	cout << "Biggest number: " << nums[length - 1] << endl;
	cout << "Sum: " << sum << endl;
	cout << "Mean: " << mean << endl;
	cout << "Length of the sequence: " << length << endl;

	return 0;
}
