#include <iostream>

using namespace std;

float getNumber() {
	float x{};
	cout << "Enter a number: ";
	cin >> x;
	return x;
}

float calculation() {
    float x1{};
    float y{ getNumber() };
	cout << "Enter an operator: ";
	char x{};
	cin >> x;
	float z{ getNumber() };
    switch (x) {

    case '+':
        cout << y << " + " << z << " = " << y + z;
        x1 = (y + z);
        break;

    case '-':
        cout << y << " - " << z << " = " << y - z;
        x1 = (y - z);
        break;

    case '*':
        cout << y << " * " << z << " = " << y * z;
        x1 = (y * z);
        break;

    case '/':
        cout << y << " / " << z << " = " << y / z;
        x1 = (y / z);
        break;

    default:
        // If the operator is other than +, -, * or /, error message is shown
        cout << "Error! operator is not correct";
        break;
    }
    return x1;
}