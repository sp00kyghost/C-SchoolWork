#include <cstdlib>
#include <iostream>

using namespace std;

int main() 
{
	double fat, carbohydrates, protein;
	double fatCalories, carbohydrateCalories, proteinCalories;
	double totalCalories;
	
	cout << "Enter the number of grams of fat: " << endl;
	cin >> fat;
	cout << "Enter the number of grams of carbohydrates: " << endl;
	cin >> carbohydrates;
	cout << "Enter the number of grams of protein: " << endl;
	cin >> protein;
	fatCalories = fat * 9;
	carbohydrateCalories = carbohydrates * 4;
	proteinCalories = protein * 4;
	totalCalories = fatCalories + carbohydrateCalories + proteinCalories;
	cout << endl;
	cout << " The total calories for ";
	cout << fat << " grams of fat, " << endl;
	cout << carbohydrates << " grams of carbohydrates, and ";
	cout << protein << " grams of protein" << endl;
	cout << " adds up to " << totalCalories << " calories." << endl;
	
	system("PAUSE");
	return 0;
}
