//Seth Prevott
//2/10/202
//minmax.cpp

#include <iostream>
#include <cstdlib>

using namespace std;

int main() 

{
	int num1 , num2;
	
	cout << "Enter first number: ";
	cin >> num1;
	cout << "Enter second number: ";
	cin >> num2;
	
	if (num1 > num2)
	{
	cout << num1 << " is the greater number." << endl;
	cout << num2 << " is the smaller number." << endl;
}

if (num2 > num1)
{
	cout << num2 << " is the greater number." << endl;
	cout << num1 << " is the smaller number." << endl;
}
	
	

	
	
	return 0;
}
