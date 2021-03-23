#include <iostream>
using namespace std;
void Countdown(int);

int main() {
	Countdown(10);
}

void Countdown(int count){
	while (count > 0){
		cout << count << endl;
		count--;
	}
	
	cout << "Blast off!!!" << endl;
}
