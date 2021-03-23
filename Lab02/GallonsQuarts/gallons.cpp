// Seth Prevott
// 1/29/2021
#include <iostream>
#include <cstdlib>
using namespace std;

double gallons;
double quarts;
double pints;
double fluid_ounces;



int main() 

{
	cout << "Enter the number of Gallons to be converted: ";
	cin >> gallons;
	fluid_ounces = gallons * 128;
	pints = gallons * 8;
	quarts = gallons * 4;
	cout << "The amount of quarts is: ";
	cout << quarts << endl;
	cout << "The amount of pints is: ";
	cout << pints << endl;
	cout << "The amount of fluid ounces is: ";
	cout << fluid_ounces << endl;
	return 0;
}
