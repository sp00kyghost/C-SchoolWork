#include <iostream>
#include <cstdlib>
using namespace std;



int main() 
{
	int count = 0;
	
	while (count <10)
	{
		cout << count << endl;
		count = count + 1;
	}
	cout << "The loop executed " << count << " times." << endl;
	system("PAUSE");
	return 0;
}
