#include <iostream>

using namespace std;

int main() {
	
	int first = 1;
	int last = 100;
	int c = first;
	int sum = 0;
	
	while (c <= last)
	{
		sum += c;
		c++;
	}
	cout << "The sum of the numbers from " << first << " to " << last << " = " << sum; //without using namespace std;
	return 0;
}
