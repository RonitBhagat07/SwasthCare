#include <iostream>
using namespace std;

int main() {
    // Declare two integer variables to hold the user inputs
    int input1, input2;

    // Prompt the user to enter the first number
    cout << "Enter the first number: ";
    cin >> input1;

    // Prompt the user to enter the second number
    cout << "Enter the second number: ";
    cin >> input2;

    // Compare the two numbers and output the result
    if (input1 > input2) {
        cout << "The first number (" << input1 << ") is greater than the second number (" << input2 << ")." << endl;
    } else if (input1 < input2) {
        cout << "The first number (" << input1 << ") is less than the second number (" << input2 << ")." << endl;
    } else {
        cout << "The first number (" << input1 << ") is equal to the second number (" << input2 << ")." << endl;
    }
    }