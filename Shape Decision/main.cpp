#include <iostream>

using namespace std;

int main()
{
    int choice = 0;
    double base, height, area;
    
    cout << "Enter 1 for a square and 2 for a triangle: ";
    cin >> choice;
    
    if (choice == 1)
    {
               cout << "Enter the base length: ";
               cin >> base;
               area = base * base;
                cout << "The area of the square is " << area;
    }
               
    if (choice == 2)
    {
               cout << "Enter the base length: ";
               cin >> base;
               cout << "Enter the height: ";
               cin >> height;
               area = (height * base) / 2.0;
                cout << "The area of the triangle is " << area;
    }
    
    if (choice > 2 || choice < 1)
               cout << "Error: Incorrect Code";
    
   
   
    cout << endl;
    system("PAUSE");
    return 0;
}

