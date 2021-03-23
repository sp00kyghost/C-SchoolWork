//Seth Prevott 11/13/2020
//payroll.cpp

#include <iostream>
#include <fstream>


using namespace std;

int main() {
	ifstream infile;
	double payr[5], pay, totalpay = 0.0;
	int hours;
	string name;
	infile.open("payroll.dat",ios::in);
	while (!infile.eof()){
		for (int c = 0; c < 5; c++){
		infile >> name >> payr[5] >> hours;
		pay = payr[5] * hours; 
		totalpay = totalpay + pay;
		cout << name << " received $" << pay << " for this check. \n" << endl;
	} //end for loop
	
	break;
	} //end while loop

	cout << "The total pay of all employees is $" << totalpay << "." << endl;
	
	infile.close();
	
	
	
	
	return 0;
}
