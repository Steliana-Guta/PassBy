// passbyaddress.cpp
#include <iostream>
#include "Address.h"
using namespace std;

Address::Address() {}
int Address::getX(int input) { x = input; return x; }
int Address::getY(int input) { y = input; return y; }

// Function Definitions
void Address::Swap( int* x, int* y)
{
   cout << "x initialized to = " << *x << ", y initialized to = " << *y << endl; //Do not alter this line
   int const temp = *x; //x = a (x=3)
   *x = *y; //a = b (a=4)
   *y = temp; //b = x (b=3)
   cout << "x changed to = " << *x << ", y changed to = " << *y << endl; //Do not alter this line
}


/* Main function */
void Address::AddressResult()
{
   cout << "Before function call, x = " << x <<", y = " << y << endl;  //Do not alter this line
   Swap(&x, &y); //execute swap
   cout << "After  function call, x = " << x << ", y = " << y << endl; //Do not alter this line  
   
}


