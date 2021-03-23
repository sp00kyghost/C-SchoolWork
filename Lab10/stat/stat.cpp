//Seth Prevott 10/27/2020


#include <iostream>

using namespace std;

int main() {
const int SIZE = 10; //Array size
	int num[SIZE];
	int total = 0; //Total amount
	int average; 
	
	//Loop to begin taking numbers for output and total.
	for(int i=0; i<10; i++){
		cout << "Please enter a number ->: ";
		cin >> num[i];
	}
	for(int i=9; i>=0; i--){
		cout << num[i] << endl;
		total = total + num[i];
	}
	average = total / SIZE;
	cout << "The total of your numbers is " << total << endl;
	cout << "The average of your numbers is " << average << endl;
	
	
	
	return 0;
}
