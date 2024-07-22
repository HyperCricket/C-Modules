#include <iostream>

using namespace std;

int main(){

	int smallRooms = 0;
	int bigRooms = 0;

	cout << "Hello, Welcome to Kevin's Carpet Cleaning Service!" << endl << endl;
	cout << "How Many Small Rooms Would You like Cleaned? ";
	cin >> smallRooms;
	cout << "How Many Big Rooms Would You Like Cleaned? ";
	cin >> bigRooms;
	cout << endl;

	const int priceOfSmall = 25;
	const int priceOfBig = 35;
	int cost = (smallRooms * priceOfSmall) + (bigRooms * priceOfBig);
	double tax = cost * 0.06;
	const int warranty = 30;

	cout << "Number of Small Rooms: " << smallRooms << endl;
	cout << "Number of Big Rooms: " << bigRooms << endl;
	cout << "Price per Small room: $" << priceOfSmall << endl;
	cout << "Price of Big Room: $" << priceOfBig << endl; 
	cout << "Cost: $" << cost << endl;
	cout << "Tax: $" << tax << endl;
	cout << "=============================" << endl;
	cout << "Total Estimate is: $" << cost + tax << endl;
	cout << "This estimate is valid for " << warranty << " days" << endl;
	return 0;

}




