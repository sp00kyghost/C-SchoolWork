//Seth Prevott
// 2/6/2021

#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;
double hoursWorked;
double pay;
double payRate;




int main() 
{
	cout << "Enter numbers of hours worked: ";
	cin >> hoursWorked;
	cout << "Enter your hourly pay rate: ";
	cin >> payRate;
	pay = payRate * hoursWorked;
	cout << setiosflags(ios::fixed);
	cout << setprecision(2);
	cout << "Your Gross Pay is : $" << pay << " dollars.";
	
	return 0;
}
