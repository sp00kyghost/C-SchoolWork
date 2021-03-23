#include <iostream>
#include <cstdlib>

using namespace std;

int main() 
{
	double base;
	double height;
	double area;
	
	cout << "Enter the base of the triangle: ";
	cin >> base;
	
	cout << "Enter the height of the triangle: ";
	cin >> height;
	
	area = 1/2.0 * base * height;
	
	cout << "The area of the triangle is: " << area << endl;
	
	return 0;
}
