// Seth Prevott 11/13/2020
//Students.cpp

#include <iostream>
#include <fstream>

using namespace std;


int main() {
	ifstream infile;
	double grade[5], average, highestaverage = 0, sum = 0.0;
	string firstn, lastn;
	infile.open("students.txt",ios::in);
	while (!infile.eof()){
		for (int c = 0; c < 5; c++){
		infile >> lastn >> firstn >> grade[0] >> grade[1] >> grade[2] >> grade[3] >> grade[4];
		sum = grade[0] + grade[1] + grade[2] + grade[3] + grade[4];
		average = (sum / 5);

		if (highestaverage < average){
			highestaverage = average;
		}
		cout << lastn << ", " << firstn << " grade average is " << average << " \n";
	} // end for loop
	cout << "The highest grade average is " << highestaverage << ".\n";
		break;
	}// end while loop
	
	
	infile.close();

	return 0;
}


