//Seth Prevott 3/3/2021
//cash.cpp

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

const double DISC = 0.08;
double total = 0.0;
double prices, grandT;
int c = 0;
int items;

int main() {
	cout << "Please enter the amount of items you purchased! ->: ";
	cin >> items;
	
	while (c < items){
		cout << "Please enter the prices for the items! ->: ";
		cin >> prices;
		cout << setiosflags(ios::fixed);
		cout << setprecision(2);
		total = total + prices;
		c = c + 1;
	}
	grandT = total - (total * DISC);
	
	cout << "The total for your items with an 8% discount is $" << grandT << "." << endl;
	
	return 0;
}
