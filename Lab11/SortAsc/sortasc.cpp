//Seth Prevott 11/4/2020
// Sortasc.cpp

#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
	int num_size = 10;
	int nums[num_size];
	
	// Populating array to be sorted.
	for (int i = 0; i < num_size; i++){
	cout << "Please enter a number ->: ";
	cin >> nums[i];
	}
	
	// Display array.
	for (int k = 0; k < num_size; k++){
		cout << nums[k] << endl;
	}
	
	// Sort array.
	int low;
	int temp;
	
	cout << "\n";
	cout << "Sorted Numbers, lowest to highest. (Ascending.) \n";
	cout << "\n";
	
	for (int k = 0; k < (num_size - 1); k++){
		low = k;
		for (int j = k+1; j < num_size; j++)
		{
			if (nums[j] < nums[low])
			{
				low = j;
			}
		}
		temp = nums[low];
		nums[low] = nums[k];
		nums[k] = temp;
	}
	
	for (int k=0; k < num_size; k++){
		cout << nums[k] << endl;
	}
	
	system("PAUSE");
	return 0;
}
