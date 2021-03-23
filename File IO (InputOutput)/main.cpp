#include <iostream>
#include <fstream>

using namespace std;

int main() {
	ifstream infile;
	ofstream outfile;
	double score;
	char name[11];
	infile.open("grades.txt",ios::in);
	outfile.open("grades2.txt",ios::out);
	if (!infile.is_open()){
		cout << "Error opening input file" << endl;
		system("PAUSE");
		exit(1);
	}
	if (!outfile.is_open()){
		cout << "Error opening output file" << endl;
		system("PAUSE");
		exit(1);
	}
	infile >> name >> score;
	while (!infile.eof()){
		outfile << name << " ";
		outfile << score + 5 << endl;
		infile >> name >> score;
	}
	
	infile.close();
	outfile.close();
	system("PAUSE");
	
	return 0;
}
