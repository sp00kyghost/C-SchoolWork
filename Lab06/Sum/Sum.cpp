//Seth Prevott 2/24/2021
//Sum.cpp


#include <iostream>
#include <cstdlib>

using namespace std;


int main() {
	
	int sum = 0; 
	int counter = 1;
	
	
	while (counter <= 100){
		cout << counter << endl;
		sum += counter;
		counter++;
	}
		cout << "The sum of the numbers 1 to 100 equals " << sum << "." << endl;
	
	
	return 0;
}
