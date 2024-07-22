#include <iostream>

using namespace std;
/* Write a Program that can represent an integer using cents 
   It is assumed that the number of cents entered is greater than or equal to 0*/

int main()
{
	int amount;
	int final;
	cout << "Enter an amount in cents: ";
	cin >> amount;
	cout << "You can provide change for this amount as follows: " << endl;
	
	cout << "Dollars : " << amount / 100 << endl;
	final = amount % 100;

	cout << "Quarters : " << final/25 << endl;
	final = final % 25;

	cout << "Dimes : " << final/10 << endl;
	final = final % 10;

	cout << "Nickels :" << final/5 << endl;
	final = final % 5;

	cout << "Pennies :" << final/1 << endl;
	return 0;
}
