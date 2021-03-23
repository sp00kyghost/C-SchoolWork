#include <cstdlib>
#include <iostream>

using namespace std;

int main() 
{
	double feet;
	double yards;
	
	cout << "Enter the number of yards:";
	cin >> yards;
	
	feet = yards * 3;
	
	cout << "The number of feet is:" << feet << endl;
	system("PAUSE");
	return 0;
}
