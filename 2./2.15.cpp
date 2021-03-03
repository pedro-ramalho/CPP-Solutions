#include <iostream>
#include <chrono>


int main() {
    int rand_num1, rand_num2, answer; 
	using Clock = std::chrono::high_resolution_clock; //generating the clock
    srand(time(NULL));

    rand_num1 = rand() % 8 + 2; //generating the first random number
    rand_num2 = rand() % 8 + 2; //generating the second random number
    int correct = rand_num1 * rand_num2; //correct answer
   
    std::cout << rand_num1 << " x " << rand_num2 << " = ?" << std::endl;
	auto start = Clock::now(); //starting the timer
    std::cin >> answer; //asking the user for an answer
	auto end = Clock::now(); //stopping the clock
	auto seconds = std::chrono::duration_cast<std::chrono::seconds>(end - start).count(); //calculating the time of input

    if (answer != correct) { //conditions of output
        std::cout << "Very Bad" << std::endl;
    }
    else {
        if (seconds < 5) {
            std::cout << "Good" << std::endl;
        }
        else if (seconds >= 5 && seconds < 10) {
            std::cout << "Satisfactory" << std::endl;
        }
        else {
            std::cout << "Insufficient" << std::endl;
        }
    }

    return 0;
}
