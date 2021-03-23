// Created by Seth Prevott
// 2/17/2021
 // Drop.cpp

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;


int main() 
{
	int ts, lowestnumber;
	double number, average;
	double sum = 0.0;
	
	string name;
	cout << "Please enter your name: ";
	cin >> name;
	lowestnumber = 100;
	
	while (ts < 3)
	{
		cout << "Please enter your test scores!";
		cout << "->: ";
		cin >> number;
		sum = sum + number;
		ts = ts + 1;
		if (lowestnumber > number)
		{
			cout << number << " is the new lowest test score. \n ";
			lowestnumber = number;
		}
		
			if (number >100 || number <0)
	{
		cout << "Error! Please enter a correct value.";
		return 0;
	}
	}
	average = (sum - lowestnumber) / (ts - 1);
	cout << name << " your average test score with the lowest grade dropped is: " << average << "." << endl;
	

	
	
	return 0;
}
