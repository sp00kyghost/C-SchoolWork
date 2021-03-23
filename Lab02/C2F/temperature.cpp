//Seth Prevott
// 1/29/2021

#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

double celsius;
double farenheit;



int main() 
{
	cout << "Enter the temperature (Celsius) to be converted: ";
	cin >> celsius;
	farenheit = (9.0 / 5.0) * celsius + 32;
	cout << setiosflags(ios::fixed);
	cout << setprecision(1);
	cout << "The temperature is " << farenheit << " degrees farenheit.";
	
	return 0;
}
