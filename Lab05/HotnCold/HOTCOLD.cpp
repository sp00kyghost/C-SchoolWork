// Created by Seth Prevott
//2/17/2021
// HOTCOLD.cpp

#include <cstdlib>
#include <iostream>

using namespace std;

double temp;

int main() 
{
	cout << "Please input a temperature (Farenheit) ->: ";
	cin >> temp;
	cout << "Substances that will freeze: \n";
	if (temp <= -173)
	cout << "Ethyl Alcohol" << endl;
	if (temp <= -38)
	cout << "Mercury" << endl;
	if (temp <= -362)
	cout << "Oxygen" << endl;
	if (temp <= 32)
	cout << "Water" << endl;
	cout << "\n";
	cout << "\n";
	cout << "Substances that will boil: " << endl;
	if (temp >= 172)
	cout << "Ethyl Alcohol" << endl;
	if (temp >= 676)
	cout << "Mercury" << endl;
	if (temp >= -306)
	cout << "Oxygen" << endl;
	if(temp >= 212)
	cout << "Water" << endl;
	
	return 0;
}
