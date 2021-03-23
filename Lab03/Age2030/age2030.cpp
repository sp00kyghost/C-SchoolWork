// Seth Prevott
// 2/3/2021
#include <iostream>
#include <cstdlib>

using namespace std;

int age, final_age, year;

const int year2 = 2030;

int main() 
{
	cout << "Enter your age: ";
	cin >> age;
	cout << "Enter the current year: ";
	cin >> year;
	final_age = (year2 - year) + age;
	cout << "Your age in 2030 will be " << final_age << ".";
	
	return 0;
}
