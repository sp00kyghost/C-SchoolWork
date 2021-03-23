// Software Sales Program
// Add code to make sure only positive numbers are used for number of units sold input
#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main()
{
// Constant for the unit price.
const double UNIT_PRICE = 99.00;

int unitsSold; // Number of units sold
double discountPct; // Discount percentage
double discountCost; // Unit cost after discount
double totalCost; // Total cost
double totalSaved; // Total Saved

// Input for the number of units sold.
cout << "Enter the number of units sold: ";
cin >> unitsSold;

// Make sure a positive number was entered.
if (unitsSold < 0){
	cout << "Error with input. Negative number detected. \n";
	cout << "Please try again. ";
	return main();
	}
// Determine the discount percentage.
if (unitsSold < 10)
discountPct = 0.00;
else if (unitsSold >= 10 && unitsSold <= 19)
discountPct = 0.20;
else if (unitsSold >= 20 && unitsSold <= 49)
discountPct = 0.30;
else if (unitsSold >= 50 && unitsSold <= 99)
discountPct = 0.40;
else if (unitsSold >= 100 && unitsSold <= 149)
discountPct = 0.45;
else 
discountPct = 0.50;

// Calculate the unit cost after the discount.
discountCost = (unitsSold * UNIT_PRICE) * discountPct;

// Calculate total cost.
totalCost = (unitsSold * UNIT_PRICE) - discountCost;

// Calculate total Saved.
totalSaved = discountCost;

// Display the total cost.
cout << setiosflags(ios::fixed);
cout << setprecision(2);
cout << "The total cost of the purchase is $" << totalCost << " dollars." << endl;
cout << "You saved $" << totalSaved << " dollars today." << endl;

return 0;
}
