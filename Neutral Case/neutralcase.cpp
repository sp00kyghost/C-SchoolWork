#include <iostream>
#include <cstdlib>

using namespace std;


int main()
{
	int number;
	cout << "Enter a number to evaluate: ";
	cin >> number;
	
	if (number == 0)
		cout << number << "is neutral.";
	else
		if (number >= 0)
			cout << number << " is positive." << endl;
		else
		cout << number << " is negative." << endl;
	return 0;
}
