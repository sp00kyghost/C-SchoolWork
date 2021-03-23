//Seth Prevott 10/20/2020


#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	int pumpkins, pumpT;
	int c = 0;
	double weight, biggestPumpkin, average;
	double weightT = 0.0;
	biggestPumpkin = 0;
	
	cout << "Please enter the number of pumpkins to be totaled and weighed. ->: ";
	cin >> pumpkins;
	
	while (c < pumpkins){
		cout << "Please enter the the weight of the pumpkins(Pounds) ->: ";
		cin >> weight;
		weightT += weight;
		c = c + 1;	
			if (biggestPumpkin < weight){
				cout << weight << " pounds is the biggest pumpkin. \n";
				biggestPumpkin = weight;
			}		
	}
	average = weightT / c;
	cout << "The average of the " << pumpkins << " pumpkins weight is " << average << " pounds." << endl;
	
	return 0;
}
