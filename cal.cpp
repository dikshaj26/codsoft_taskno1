#include <iostream>
using namespace std;

class SimpleCalculator {
    int operation;
    double num1, num2;

public:
    void getDataSimple() {
        cout << "Enter value of num1: ";
        cin >> num1;

        cout << "Enter value of num2: ";
        cin >> num2;

        cout << "Select operation:" << endl;
        cout << "1. Addition (+)" << endl;
        cout << "2. Subtraction (-)" << endl;
        cout << "3. Multiplication (*)" << endl;
        cout << "4. Division (/)" << endl;

        cout << "Enter operation number (1/2/3/4): ";
        cin >> operation;
    }

    void performSimple() {
        switch (operation) {
            case 1:
                cout << "Result: " << num1 + num2 << endl;
                break;
            case 2:
                cout << "Result: " << num1 - num2 << endl;
                break;
            case 3:
                cout << "Result: " << num1 * num2 << endl;
                break;
            case 4:
                if (num2 != 0) {
                    cout << "Result: " << num1 / num2 << endl;
                } else {
                    cout << "Error: Division by zero is not allowed." << endl;
                }
                break;
            default:
                cout << "Invalid operation choice!" << endl;
                break; // Added break to ensure proper termination of switch case
        }
    }
};

int main() {
    SimpleCalculator calc;
    calc.getDataSimple();
    calc.performSimple();
    return 0;
}
