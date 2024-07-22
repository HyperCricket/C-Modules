#include <iostream>
#include <cmath>
#include <vector>
#include <string>
using namespace std;

/* Section 11 Challenge: Recreate the challenge from Section 9 using functions.
	Hints: Create functions for each major function, keep functions small, keep the vector declaration in the main function and pass the vector object to any function that
	requires it.
	DO NOT move the vector object outside the main and make it a global variable.
	- Start by defining a function that displays the menu
	- You can then define a function that reads the selection from the user and returns it in uppercase
	- Create functions for each menu option
	- Create functions that display the list of numbers, calculates mean, so forth.

	Major Functions:
	- print numbers
	- add a number
	- display the mean
	- find and display smallers number
	- find and display biggest number
	- quit
*/

void menu();
char selection();
void print_numbers(const vector <int>);
void add_number(vector <int>&, int x);
double mean(vector <int>);
int smallest(vector <int>);
int biggest(vector <int>);
void terminate_program();


int main()
{
	vector<int> list;
	char choice;
	do{
		
		menu();
		choice = selection();

		
		if (choice == 'P')
		{
			print_numbers(list);
		}
		else if (choice == 'A')
		{
			int num;
			cout << "Enter a number to the list: ";
			cin >> num;
			add_number(list, num);
			cout << num << " was added to the list" << endl;
		}
		else if (choice == 'M')
		{
			cout << "The mean of the list is: " << mean(list) << endl;
		}
		else if (choice == 'S')
		{
			cout << "The smallest in the list is: " << smallest(list) << endl;
		}
		else if (choice == 'L')
		{
			cout << "The largest in the list is: " << biggest(list) << endl;
		}
		else if (choice == 'Q')
		{
			terminate_program();
		}
		else
		{
			cout << "Please try again and pick a choice from the given list." << endl;
		}
	}
	while(choice != 'Q');
	
	return 0;
}
void menu()
{
	cout << "Please pick a choice corresponding to the letter." << endl;
	cout << "\n-------------" << endl;
	cout << "P - Print numbers" << endl;
	cout << "A - add a number" << endl;
	cout << "M - Display the mean of the numbers" << endl;
	cout << "S - Display the smallest number" << endl;
	cout << "L - Display the largest number" << endl;
	cout << "Q - Quit" << endl;
}

char selection()
{
	char c;
	cin >> c;
	return toupper(c);
}

void print_numbers(vector<int> list)
{
	cout << "This list contains: ";
	if (list.size() == 0)
	{
		cout << "nothing" << endl;
	}
	else
	{
		cout << "[ ";
		for (auto v: list)
		{
			cout << v << " ";
		}
		cout << " ]" << endl;
	}
	
}

void add_number(vector <int> &list, int num)
{
	list.push_back(num);
}

double mean(vector<int> list)
{
	if (list.size() == 0)
	{
		return 0.0;
	}
	double total = 0;
	for (int i = 0; i < list.size(); i++)
	{
		total += list.at(i);
	}
	return total/list.size();
}

int smallest(vector <int> list)
{
	if (list.size() == 0)
	{
		return 0;
	}
	int smallest = INT_MAX;
	for (int i = 0; i < list.size(); i++)
	{
		if (list.at(i) < smallest)
		{
			smallest = list.at(i);
		}
	}
	return smallest;
}

int biggest(vector<int> list)\
{
	if (list.size() == 0)
	{
		return 0;
	}
	int biggest = INT_MIN;
	for (int i = 0; i < list.size(); i++)
	{
		if (list.at(i) > biggest)
		{
			biggest = list.at(i);
		}
	}
	return biggest;
}

void terminate_program()
{
	cout << "Program Terminated" << endl;
}
