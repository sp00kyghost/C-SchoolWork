//Seth Prevott
//SelectionSort

#include <cstdlib>
#include <iostream>
using namespace std;

int main() 
{
	int array_size = 20;
	int nums[array_size];
	//populate array
	for (int k=0; k < array_size; k++)
	{
		nums[k]=rand()%100;
	}
	// Display array
	for (int i=0; i < array_size; i++)
	{
		cout << nums[i] << " ";
	}
	cout << endl;
	
	// Sort the array
	int low;
	int temp;
	
	for (int i=0; i < (array_size -1); i++)
	{
		low = i;
		for (int j = i+1; j < array_size; j++)
		{
			if (nums[j] < nums[low])
			{
				low = j;
			}
		}
		temp = nums[low];
		nums[low] = nums[i];
		nums[i] = temp;
		// for (int k=0;k < array_size; k++)		//For loop used to see whats happening, remove to have short sort.
		// {
		//	cout << nums[k] << " ";
		// }	
		// cout << endl;
	}
	for (int k=0; k < array_size; k++)
	{
		cout << nums[k] << " ";
	}
	cout << endl;
	
	return 0;
}
