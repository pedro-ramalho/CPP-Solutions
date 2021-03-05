#include <iostream>
#include <cmath>
#include <string>

using namespace std;


int main() {

    double operand1, operand2, result, M; //operand, result and memory value
    char operation; //operation
    string command; //additional command

    cout << "Type the desired operation in the following format: <operand1>*operation*<operand2>" << endl; //format of input
    cout << "\n"; //new line for separation

    cout << "Available operations: " << endl; //telling the user which operations are available
    cout << "Addition: +" << endl;
    cout << "Subtraction: -" << endl;
    cout << "Multiplication: *" << endl;
    cout << "Division: /" << endl;
    cout << "\n";

    cout << "The following additional commands are also available: " << endl; //telling the user which additional commands are available
    cout << "Save the result: M" << endl;
    cout << "Clear the result on memory: MC" << endl;
    cout << "Add the current result to the memory result: M+" << endl;
    cout << "Subtract the current result to the memory result: M-" << endl;
    cout << "Show the current value on memory: MR" << endl;
    cout << "Clear the contents of the display: C" << endl;
    cout << "\n";

    while (true) {

        cout << "Enter the digits and the operation: " << endl;
        cin >> operand1 >> operation >> operand2;

        if (operation == '+') {
            result = operand1 + operand2;
            cout << result << endl;
        }
        else if (operation == '-') {
            result = operand1 - operand2;
            cout << result << endl;
        }
        else if (operation == '*') {
            result = operand1 * operand2;
            cout << result << endl;
        }
        else if (operation == '/') {
            result = operand1 / operand2;
            cout << result << endl;
        }

        cout << "Additional command (type EXIT to leave): " << endl;
        cin >> command;

        if (command == "M") { //saving the value on memory
            M = result;
            cout << "The value " << result << " has been saved to the memory." << endl;
        }
        else if (command == "MC") { //clearing the memory
            M = 0;
            cout << "The memory has been cleared." << endl;
        }
        else if (command == "M+") { //adding the current result to the memory
            cout << "The value " << result << " has been added to the memory." << endl;
            M += result;
        }
        else if (command == "M-") { //subtracting the current result to the memory
            cout << "The value " << result << " has been subtracted to the memory." << endl;
            M -= result;
        }
        else if (command == "MR") { //displaying the current result on memory
            cout << "The current value on the memory is " << M << endl;
        }
        else if (command == "C") { //clearing the current result
            cout << "The results have been cleared." << endl;
            result = 0;
        }
        else if (command == "EXIT") { //condition to leave the calculator
            break;
        }
    }

    return 0;
}
