#include <iostream>

using namespace std;

int main() {
	
	int first = 1; //first number in sequence
	int last = 99; //last number in sequence
	int diff = 2; //difference or space between numbers in the sequence
	int c = first;
	int sum = 0;
	
	while (c <= last)
	{
		sum = sum + c;
		c = c + diff;
	}
	cout << "The sum of the numbers from " << first << " to " << last << " = " << sum; //without using namespace std;
	return 0;
}
