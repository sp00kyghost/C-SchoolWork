#include <iostream>

using namespace std;

int main() {
	double number;
	double total = 0;
	cout << "Enter a number (or 0 to exit); ";
	cin >> number;
	while (number != 0)
		{
		total = total + number;
		cout << "Enter a number (or 0 to exit): ";
		cin >> number;	
	}
	cout << "The total is " << total << endl;
	
	
	
	return 0;
}
