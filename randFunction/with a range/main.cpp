#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	int number1;
	int number2;
	int number3;
	srand(time(0)); //randomize number gen
	number1 = rand() % 10 + 1;
	number2 = rand() % 10 + 1;
	number3 = rand() % 10 + 1;
	cout << number1 << endl;
	cout << number2 << endl;
	cout << number3 << endl;
	
	return 0;
}
