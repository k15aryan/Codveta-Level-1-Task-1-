#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    int choice;

    // Display Menu
    cout << "Select operation:\n";
    cout << "1. Add\n";
    cout << "2. Subtract\n";
    cout << "3. Multiply\n";
    cout << "4. Divide\n";
    cout << "Enter choice (1/2/3/4): ";
    cin >> choice;

    // Input numbers
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    // Perform operation
    switch (choice) {
        case 1:
            cout << "Result: " << (num1 + num2) << endl;
            break;
        case 2:
            cout << "Result: " << (num1 - num2) << endl;
            break;
        case 3:
            cout << "Result: " << (num1 * num2) << endl;
            break;
        case 4:
            if (num2 == 0)
                cout << "Error: Cannot divide by zero!" << endl;
            else
                cout << "Result: " << (num1 / num2) << endl;
            break;
        default:
            cout << "Invalid choice. Please enter 1 to 4." << endl;
    }

    return 0;
}
