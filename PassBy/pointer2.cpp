/* HelloFunctionWorld.cpp */
#include<iostream>

using namespace std;

const char* printMessage()
{
	const char* message = "Hello World"; //message
	cout << "Message is: " << message << endl; //print message
	return  message; 
};

void Pointer2()
{
	printMessage(); //call method
	
}