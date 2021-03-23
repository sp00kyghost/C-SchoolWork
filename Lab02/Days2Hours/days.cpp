// Seth Prevott
// 1/29/2021

#include <iostream>
#include <cstdlib>
using namespace std;

int days;
int hours_total;

const int HOURS_TOTAL = 24;


int main()
{
	cout << "Convert days to hours" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "Enter the number of days: ";
	cin >> days;
	hours_total = days * HOURS_TOTAL;
	if (days < 2)
	cout << days << " day is the same as " << hours_total << " hours.";
	else
	cout << days << " days is the same as " << hours_total << " hours."<< endl;

	
	
	return 0;
}
