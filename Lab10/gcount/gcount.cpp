//Seth Prevott 10/27/2020

#include <iostream>


using namespace std;


int main() {
	int grades[5] = {};
	int num;
	string letters[5] = {"F", "D", "C", "B", "A"};
	
	
	cout << "Please enter a number for the following grades of your exam.\n";
	cout << "4 for A, 3 for B, 2 for C, 1 for D, 0 for F.\n";
	cout << "Or -1 to exit the program.\n";
	cout << "->: ";
	cin >> num;
	
	while (num != -1){
		grades[num] += 1;
		cout << "Please enter a number for the following grades of your exam.\n";
		cout << "4 for A, 3 for B, 2 for C, 1 for D, 0 for F.\n";
		cout << "Or -1 to exit the program.\n";
		cout << "->: ";
		cin >> num;
	}
	for(int i = 0; i < 5; i++){
		cout << "Grade " << letters[i] << ": " << endl;
		cout << "You received " << grades[i] << ".\n" << endl;
	}
	
	
	
	return 0;
}
