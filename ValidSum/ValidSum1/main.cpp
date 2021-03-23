#include <iostream>
#include <limits.h>
using namespace std;


int main() {
	int num1;
	int num2;
	int sum;
//2147483647
	cout << "Enter the first number: ";
	cin >> num1;
		if (!cin){
			cout << "Error";
			return (1);
		}
	cout << "Enter the second number: ";
	cin >> num2;
		if (!cin){
			cout << "Error";
			return (1);
		}
if (((num2 > 0) && (num1 > (INT_MAX - num2))) ||((num2 < 0) && (num1 < (INT_MIN - num2)))){
		/* Handle Error */
		cout << "Overflow error detected";
	}
	else{
	sum = num1 + num2;
	cout << "The sum of " << num1 << " and " << num2 << " is " << sum <<
	".";	
	}
	return 0;
}
