#include <iostream>
using namespace std;
void Countdown(int);

int main() {
	Countdown(10);
}

void Countdown(int count){
	if (count == 0){
		cout << "Blast off!!!" << endl;
	}
	else {
		cout << count << endl;
		Countdown(count-1);
	}
	
}
