//Seth Prevott
//2/9/2021
//ODD.cpp

#include <cstdlib>
#include <iostream>

using namespace std;

int number;

int main() 
{
	cout << "Input number to be evaluated: ";
	cin >> number ;
	
	if (number % 2 == 0)
	cout << number << " is even.";
	else
	cout << number << " is odd.";
	
	return 0;
}
