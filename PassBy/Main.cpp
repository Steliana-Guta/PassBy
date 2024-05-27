#include<iostream>
#include "Address.h"
#include "Reference.h"
#include "Value.h"
using namespace std;
//int main()
void Somethiing()
{
	
	int choice; //store user input
	int x; //first number
	int y; //second number
	do
	{
		
	cout << "Please insert 2 numbers of 1 digit each and press enter after each insert." << endl;
	cin >> x;
	cin >> y;
	cout << "Please choose the method you want to pass the values 3 and 4.\n" <<
		"1. Pass by address.\n" <<
		"2. Pass by reference.\n" <<
		"3. Pass by value.\n" <<
		"9. Exit.\n" << endl; //let user choose method
	cin >> choice;
	
	
	
		if (choice == 1) //if user chooses by address
		{
			Address a = Address();
			a.getX(x);
			a.getY(y);
			a.AddressResult();
		}
		else if (choice == 2) //if user chooses by reference
		{
			Reference r = Reference();
			r.getX(x);
			r.getY(y);
			r.ReferenceResult();
		}
		else if (choice == 3) //if user chooses by value
		{
			Value v = Value();
			v.getX(x);
			v.getY(y);
			v.ValueResult();
			//supposed to not change the values
		}
		else if (choice == 9)
		{
			break;
		}
		else
		{
			cout << "Please enter a valid choice." << endl;
		}
	} while (choice != 9);
	cout << "Than you! Bye-Bye!" << endl;
	exit(0);
}