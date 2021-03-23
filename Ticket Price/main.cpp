#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main() 
{
	int adult_count;
	int child_count;
	double adult_total;
	double child_total;
	double total_price;
	const double ADULT_PRICE = 10.25;
	const double CHILD_PRICE = 6.75;
	
	cout << "How many adults need a ticket?: ";
	cin >> adult_count;
	cout << "How many children need a ticket?: ";
	cin >> child_count;
	adult_total = adult_count * ADULT_PRICE;
	child_total = child_count * CHILD_PRICE;
	total_price = adult_total + child_total;
	cout << setiosflags(ios::fixed);
	cout << setprecision(2);
	cout << "Your total cost is $" << total_price << endl;
	return 0;
}
