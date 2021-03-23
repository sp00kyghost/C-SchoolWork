#include <iostream>
using namespace std;
void draw_house();
int main() 
{
	for (int i=0;i<3;i++)
	{
		draw_house();
	}
	return 0;
}
void draw_house()

{
	cout << "       /\\     $" << endl;
	cout << "      /\t\\    _" << endl;
	cout << "     /    \\  | |" << endl;
	cout << "    /      \\ | |" << endl;
	cout << "   /        \\| |" << endl;
	cout << "  /          \\ |" << endl;
	cout << " /            \\|" << endl;
	cout << "****************" << endl;
	cout <<"|  _           |" << endl;
	cout <<"| | |          |" << endl;
	cout <<"|              |" << endl;
	cout <<"|              |" << endl;
	cout <<"|     -        |" << endl;
	cout <<"|    : :       |" << endl;
	cout <<"|    : :       |" << endl;
	cout << "****************" << endl;
	
	return;
}
