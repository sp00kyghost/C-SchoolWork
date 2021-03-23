//Seth Prevott 03/18/2020
//guess.cpp

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	
	int userg, rnum, c = 0;
	srand(time(0));
	rnum = rand() % 100 + 1;
	
	while (userg != rnum){
		cout << "Enter a guess between 1 and 100!\n";
		cin >> userg;
		c++;
		if (userg > rnum){
			cout << "Please guess again! Your guess was too high.\n";
		}
		else if (userg < rnum){
			cout << "Please guess again! Your guess was too low.\n";
		}
		else{
		cout << "Congratulations! You guessed correctly!\n";
		cout << "It took you " << c << " guesses!";
		}
	} // end while loop.
	
	
	return 0;
}
