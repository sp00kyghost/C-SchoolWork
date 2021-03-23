// Seth Prevott
//2/3/2021

#include <iostream>
#include <cstdlib>

using namespace std;

int exam_q;
int correct_q;
double examtotal;



int main() 
{
	char name[20];
	cout << "Please enter your name: ";
	cin >> name;
	cout << "Enter total number of exam questions: ";
	cin >> exam_q;
	cout << "Enter total number of correct answers: ";
	cin >> correct_q;
	examtotal = ((double) correct_q / (double) exam_q) * 100;
	cout << name << "'s" << " exam grade is: " << examtotal << "%.";
	
	
	
	return 0;
}
