//Seth Prevott 03/18/2020
//pick3.cpp

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main(){
	
	
int num1,num2,num3;
int sum = 0;
srand(time(0));//randomize the number generation
num1 = rand() % 10;
num2 = rand() % 10;
num3 = rand() % 10;


cout << "Automated Pick-3 Lottery Program!\n";
cout << "\n";
cout << "The computer picked the numbers " << num1 << ".\n";
cout << "                                " << num2 << ".\n";
cout << "                                " << num3 << ".\n";

sum = num1+num2+num3;

cout << "The computer sums up the numbers to " << sum << ".\n";
cout << "\nGoodbye and Good luck!";

return 0;
}
