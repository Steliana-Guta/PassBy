// passbyaddress.cpp
#include <iostream>
#include "Address.h"

using namespace std;

// Function Definitions
void Swap(int* x, int* y)
{
	cout << "x initialized to = " << *x << ", y initialized to = " << *y << endl; //Do not alter this line
	int const temp = *x; //x = a (x=3)
	*x = *y; //a = b (a=4)
	*y = temp; //b = x (b=3)
	cout << "x changed to = " << *x << ", y changed to = " << *y << endl; //Do not alter this line
}


/* Main function */
int main()
{
	int x, y; 
	cout << "Please insert 2 numbers of 1 digit each and press enter after each insert.\n";
	cin >> x; //fill in x and y by the user
	cin >> y;
	cout << "Before function call, x = " << x << ", y = " << y << endl;  //Do not alter this line
	Swap(&x, &y); //execute swap
	cout << "After  function call, x = " << x << ", y = " << y << endl; //Do not alter this line  
	system("PAUSE");
	return 0;
}
