//Seth Prevott 11/13/2020
//tempfile.cpp
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {
	ofstream outfile;
	outfile.open("tempfile.txt",ios::out);
	
	int celsius = 0;
	double farenheit;
	
while (!outfile.eof()){
	

	for (celsius = 0; celsius <= 100; celsius = celsius + 10 ){
		farenheit = (9.0 / 5.0) * celsius + 32;
		cout << setiosflags(ios::fixed);
		cout << setprecision(1);
		cout << celsius <<" degrees Celsius " << "is equal to " << farenheit << " degrees Farenheit." << endl;
	outfile << celsius <<" degrees Celsius " << "is equal to " << farenheit << " degrees Farenheit." << endl;
	}
	
	break;
}
	outfile.close();
	
	
	return 0;
}
