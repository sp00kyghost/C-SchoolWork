//Seth Prevott 2/26/2021
//penny.cpp


#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cmath>

using namespace std;

const double payrate = 0.01;
const int incAmount = 2;



int main() {
	
	double totalpay;
	int day;
	
	cout << "Please enter the number of days you have worked ->: ";
	cin >> day;
	
	for (int d = 0; d < day; d++ ){
		cout << setiosflags(ios::fixed);
		cout << setprecision(2);
		totalpay += payrate;
		cout << "The total pay for " << (d + 1) << " days worked "<< "equals " << totalpay << "$.\n";
		totalpay *= incAmount;
	}
	
	
	return 0;
}
