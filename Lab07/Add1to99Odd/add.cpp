//Seth Prevott 3/3/2021
//add.cpp

#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
	
	int c = 1;
	int diff = 2;
	int sum = 0;
	
	while (c <= 99){
		cout << c << endl;
		sum = sum + c;
		c = c + diff;
	}
	cout << "The total of the odd numbers between 1 to 99 is equal to " << sum << endl;
	
	
	return 0;
}
