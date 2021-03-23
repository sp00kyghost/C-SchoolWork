#include <iostream>

//"using namespace std;"

int main() {
	
	int c = 1;
	int sum = 0;
	
	while (c <= 100)
	{
		sum += c;
		c++;
	}
	std::cout << "The sum of the numbers from 1 to 100 = " << sum; //without using namespace std;
	return 0;
}
