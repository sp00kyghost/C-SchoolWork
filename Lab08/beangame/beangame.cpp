//Seth Prevott 03/18/2020
//beangame.cpp


#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main() {
	const double jbradius = 0.75; //jellybean radius
	const double jbl = 2; //jellybean height/length
	double jbs = 3.14159 * pow(jbradius, 2) * jbl; //jellybean size.
	double radius, height, vol;
	int jbt;
	
	cout << "Welcome to the Jellybean Counting Program!\n\n";
	cout << "Please enter the radius of the jar. ->: ";
	cin >> radius;
	cout << "Please enter the height of the jar. ->: ";
	cin >> height;
	
	vol = 3.14159 * pow(radius, 2) * height; // volume of cylinder.
	cout << "The calculated volume of the jar is " << vol << ".\n";
	cout << "\n";
	
	jbt = vol / jbs;
	
	cout << "The estimated amount of jellybeans in the jar is " << jbt << ".\n";	
	return 0;
}
