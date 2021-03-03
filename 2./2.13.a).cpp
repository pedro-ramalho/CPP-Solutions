#include <iostream> 
#include <vector>
#include <algorithm>
using namespace std;


int main() {

	int length; //length of the sequence of integers
	int n, sum = 0;
	vector <int> nums;

	cout << "Enter the length of the sequence: " << endl;
	cin >> length; //asking for length

	for (int i = 1; i <= length; i++) { //asking the user "length" times for input
		cout << "Number " << i << ": ";
		cin >> n; //now the user inputs length times
		sum += n; //adding each number
		nums.push_back(n); //pushing each number into the vector
	}

	float mean = (float)sum / length; //calculating the mean
	sort(nums.begin(), nums.end()); //sorting the vector

	cout << "Smallest number: " << nums[0] << endl;
	cout << "Largest number: " << nums[length - 1] << endl;
	cout << "Sum of the numbers: " << sum << endl;
	cout << "Mean of the numbers: " << mean << endl;

	return 0;
}
