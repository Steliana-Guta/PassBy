// passbyvalue.cpp
#include <iostream>
#include "Value.h"
using namespace std;
Value::Value() {}
int Value::getX(int input) { x = input; return x; }
int Value::getY(int input) { y = input; return y; }

// Function Definitions
void Value::Swap( int x, int y)
{
   cout << "x initialized to = " << x << ", y initialized to = " << y << endl; //Do not alter this line
   int temp = x; //x=3
   x = y; //x=4
   y = temp; //y=3
   cout << "x changed to = " << x << ", y changed to = " << y << endl; //Do not alter this line
};

/* Main function */
void Value::ValueResult()
{
   
   cout << "Before function call, x = " << x <<", y = " << y << endl;  //Do not alter this line
   Swap( x, y ); //execute swap
   cout << "After  function call, x = " << x << ", y = " << y << endl; //Do not alter this line  
   
}


