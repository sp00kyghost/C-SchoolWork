#include <iostream>
using namespace std;

int main()

{
	int number;
    cout << "Enter a number to evaluate: ";
    cin >> number;
    
    if (number >= 0)
       cout << number << " is positive." << endl;
    else   
       cout << number << " is negative." << endl;   
    
    system("PAUSE");
    return 0;
}
