// Created by Seth Prevott
//2/18/2021
// Widget.cpp


#include <cstdlib>
#include <iostream>



using namespace std;


int main() 
{

int widgetnum;
double totalcost;	
double WIDGET_PRICE = 10.00;

	
cout << "!!!XYZ Company Widget Product Order!!!" << endl;
cout << "Please enter the amount of Widgets you would like to order ->: ";
cin >> widgetnum;
totalcost = widgetnum * WIDGET_PRICE;

if (widgetnum <=0){
	cout << "Error in input, please try again.";
	
}

else if (widgetnum == 1){
	totalcost = widgetnum * WIDGET_PRICE;
	cout << "The price of " << widgetnum << " Widget Unit is $" << totalcost << "." << endl;
	
}
else if (widgetnum >= 2 && widgetnum <= 4){
	totalcost = widgetnum * (WIDGET_PRICE - 1);
	cout << "The total cost for " << widgetnum << " Widget Units is: $" << totalcost << endl;
	
	}
else if (widgetnum >= 5 && widgetnum <= 9){
	totalcost = widgetnum * (WIDGET_PRICE - 2);
	cout << "The total cost for " << widgetnum << " Widget Units is: $" << totalcost << endl;
	
}
else if (widgetnum >= 10){
	totalcost = widgetnum * (WIDGET_PRICE - 4);
	cout << "The total cost for " << widgetnum << " Widget Units is: $" << totalcost << endl;
}
return 0;
}



