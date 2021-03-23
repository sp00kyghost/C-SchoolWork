#include <iostream>

using namespace std;


int main() {
	int score[3] = {};
	int contestant;
	
	cout << "Enter scorer\'s contestant number ->: ";
	cout << "(or -1 to quit) ->: ";
	cin >> contestant;
	
	while (contestant !=-1)
	{
		score[contestant] += 1;
		cout << "Enter scorer\'s contestant number ->: ";
		cout << "(or -1 to quit) ->: ";
		cin >> contestant;
	}
	for (int i=1; i < 4; i++)
	{
		cout << "Contestant # " << i;
		cout << " got " << score[i] << " correct.";
		cout << endl;
	}
	
	
	
	return 0;
}
