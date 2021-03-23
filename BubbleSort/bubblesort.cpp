//Seth Prevott 11/4/2020
//BubbleSort

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	int array_size = 20;
	int nums[array_size];
	//int nums[] = {99, 98, 97, 96, 95, 94, 93, 92, 91, 90, 89, 88, 87, 86, 85, 84, 83, 82, 81, 80};
	//size_t array_size = sizeof(nums)/sizeof(nums[0]);
	int i, j, k;
	
	// Populate array
	for(k=0; (k < array_size); k++)
	{
		nums[k]= rand()%100;
	}
	
	int flag = 1;
	int temp;		//swap variable
	//cout << array_size;
	for (i=0; (i < array_size); i++)
	{
		flag = 0;
		//print array
		for (k=0; k < array_size; k++)
		{
			cout << nums[k] << " ";
		}
		cout << endl;
		
		for (j=0; j < array_size-1-i; j++)
		{
			if (nums[j+1] < nums[j])
			{
				temp = nums[j];			//swap array elements
				nums[j] = nums[j+1];
				nums[j+1] = temp;
				flag = 1;				// set swap flag
			}
		}
		if (flag == 0)
		{
			cout << "flag" << endl;
			break;
		}
	}
	//Print Array
	for (k=0; k<array_size; k++)
	{
		cout << nums[k] << " ";
	}
	return 0;
}
