//Seth Prevott 3/3/2021
//eggs.cpp

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	int eggs, eggsT;
	int c = 0;
	double weight, biggestegg, average;
	double weightT = 0.0;
	biggestegg = 0;
	
	cout << "Please enter the number of Easter Eggs to be totaled and weighed. ->: ";
	cin >> eggs;
	
	while (c < eggs){
		cout << "Please enter the the weight of the Easter Eggs (Grams) ->: ";
		cin >> weight;
		weightT += weight;
		c = c + 1;	
			if (biggestegg < weight){
				cout << weight << " grams is the biggest easter egg. \n";
				biggestegg = weight;
			}		
	}
	average = weightT / c;
	cout << "The average of the " << eggs << " easter eggs weight is " << average << " grams." << endl;
	
	return 0;
}
