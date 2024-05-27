/* HelloFunctionWorld.cpp */
#include<iostream>

using namespace std;

// Printing Method
void printMessage(const char* statement)
{
	cout << "Message is: " << statement << endl; //prompt the user with the message
};

void Pointer1()
{
	const char* message = "Hello World";
	printMessage(message); //call printing method
	
}