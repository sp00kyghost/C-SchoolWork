//Seth Prevott
//2/1/2021
//FLOOR2.cpp

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int choice;
double areaoc, radius, width, length, areaor, floorcost, floortotal;




int main() 
{
	cout << "What type of room will you be designing?" << endl;
	cout << "1 for rectangle. 2 for circle. " << endl;
	cout << "->: ";
	cin >> choice;
	
	
		if (choice == 1)
	{
		cout << "Please enter the width of the room ->: ";
		cin >> width;
		cout << "Please enter the length of the room ->: ";
		cin >> length;
		cout << "What is the cost of flooring per square foot? ";
		cin >> floorcost;
		areaor = (length * width);
		cout << setiosflags(ios::fixed);
	    cout << setprecision(2);
		cout << "The total amount of square feet in this room is: " << areaor << endl;
		floortotal = areaor * floorcost;
		cout << "The total pricing of flooring for this room is: $" << floortotal << endl;
}
	
		if (choice == 2)
		{
			cout << "Please enter the radius of this room ->: ";
			cin >> radius;
			cout << "What is the cost of flooring per square foot? ";
			cin >> floorcost;
			areaoc = 3.14 * radius * radius;
			cout << setiosflags(ios::fixed);
	    	cout << setprecision(2);
	    	cout << "The total amount of square feet in this room is: " << areaoc << endl;
	    	floortotal = areaoc * floorcost;
	    	cout << "The total pricing of flooring for this room is: " << floortotal << endl;
			}
	
	
	
	
	
		if (choice >2 || choice <1)
	cout << "Error! Incorrect input detected.";
	return 0;
}
