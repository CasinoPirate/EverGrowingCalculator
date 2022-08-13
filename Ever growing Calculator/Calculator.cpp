#include <iostream>
#include "CalculatorHeader.h"

using namespace std;
// Overall calculator
int main()
{
	char x{};
	cout << "Welcome to The Ever Growing Calculator!" << endl;
	do
	{
		calculation();
		cout << "\nWould you like to run again? y/n: ";
		cin >> x;
	} while(x == 'y'); // Decides to run again or not
}