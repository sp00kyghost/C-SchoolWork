//Seth Prevott 2/26/2021
//tempchart.cpp

#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;




int main() {
	
	int celsius = 0;
	double farenheit;
	
	for (celsius = 0; celsius <= 100; celsius = celsius + 10 ){
		farenheit = (9.0 / 5.0) * celsius + 32;
		cout << setiosflags(ios::fixed);
		cout << setprecision(1);
		cout << celsius <<" degrees Celsius " << "is equal to " << farenheit << " degrees Farenheit." << endl;
	}

	
	
	
	
	return 0;
}
