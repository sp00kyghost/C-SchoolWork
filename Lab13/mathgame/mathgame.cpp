//Seth Prevott 11/20/2020
//mathgame.cpp

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	int menuChoice = 0;
	int num1, num2, answer, useranswer;
	
	
	
	while (menuChoice != 5){
	srand(time(0));
	num1 = rand() % 13;
	num2 = rand() % 13;
		switch (menuChoice){
			case 0:
				break;
			case 1:
				cout << "Solve for " << num1 << " + " << num2 << ".\n";
				answer = num1 + num2;
				cin >> useranswer;
				if (useranswer != answer){
					cout << "Incorrect answer.\n";
					cout << "Correct answer was " << answer << ".\n";
				}
				if (useranswer == answer){
					cout << "Yay you got it Correct!:)\n";
			}
				break;
			case 2:
				while (num2 > num1){
				num2 = rand() % 13;
			}
				cout << "Solve for " << num1 << " - " << num2 << ".\n";
				answer = num1 - num2;
				cin >> useranswer;
				if (useranswer != answer){
					cout << "Incorrect answer.\n";
					cout << "Correct answer was " << answer << ".\n";
				}
				if (useranswer == answer){
					cout << "Yay you got it Correct!:)\n";
			}
				break;
			case 3:
				cout << "Solve for " << num1 << " x " << num2 << ".\n";
				answer = num1*num2;
				cin >> useranswer;
				if (useranswer != answer){
					cout << "Incorrect answer.\n";
					cout << "Correct answer was " << answer << ".\n";
				}
				if (useranswer == answer){
					cout << "Yay you got it Correct!:)\n";
			}
				break;
			case 4:
				while (num1 >= num2){
				num1 = (rand()%12)+1;
				num2 = (rand()%12)+1;
			}
				if (num1 == 0){
					num1 = 1;
				}
				cout << "Solve for " << num2 << " / " << num1 << " using whole numbers only. No decimals!\n";
				answer = num2/num1;
				cin >> useranswer;
				if (useranswer != answer){
					cout << "Incorrect answer.\n";
					cout << "Correct answer was " << answer << ".\n";
				}
				if (useranswer == answer){
					cout << "Yay you got it Correct!:)\n";
			}
			break;
			default: cout << "Invalid menu selection.\n\a";
		}// end switch
	cout << endl;
	cout << "Welcome to the Mathgame! Good luck! :)\n";
	cout << "1. For Addition.\n";
	cout << "2. For Subtraction.\n";
	cout << "3. For Multiplication.\n";
	cout << "4. For Division.\n";
	cout << "5. To Exit Application.\n";
	cin >> menuChoice;
	}// end while
	
	cout << "Good bye! Thanks for playing! :)\n";
	return 0;
}
