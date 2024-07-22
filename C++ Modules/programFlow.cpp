#include <iostream>
#include <vector>
using namespace std;
/* This challenge is about using a collection (list) of ints and allowing the user to 
	select options from a menu to perform operations on the list.
	Your program should run as follows:
	P - print numbers
	A - add a number
	M - Display the mean of the numbers
	S - Dislplay the smallest number
	L - Display the Largest Number
	Q - Quit
	

	Enter your choice:
	
	This program should only allow valid choices from the user, and both upper and lowercase should work.
	If an illegal choice is made, the program should display "Unknown selection, please try again" and the menu options should be displayed again.

	If the user enters P or p, you should display all elements in the list. Ex: [ 1 2 3 4 5 ]
	If the list is empty display [] - the list is empty

	If the user enters A or a, then you should prompt the user to add to the list and then you should display the number added: Ex: 5 added

	If the user enters M or m you should calculate the mean of the list and display it. If the list is empty, display Unable to calculate the mean - no data

	If the user enters S or s, display the smallest number in the list. If the list is empty, display "Unable to determine the smallest number - list is empty"

	If the user enter L or l, display the largest number in the list. If the list is empty, display "Unable to determine the largest number - list is empty"

	If the user enters Q or q, the program should terminate.

*/
int main() 
{
	vector <int> list; 
	char choice;
	do{
		cout << "\n-------------" << endl;
		cout << "P - Print numbers" << endl;
		cout << "A - add a number" << endl;
		cout << "M - Display the mean of the numbers" << endl;
		cout << "S - Display the smallest number" << endl;
		cout << "L - Display the largest number" << endl;
		cout << "Q - Quit" << endl;

		cout << "Enter your choice: ";
		cin >> choice;
		cout << endl;

		switch (choice)
		{
			case 'P':
			case 'p':
				{
					if (list.size() == 0)
					{
						cout << "[] - the list is empty" << endl;
						break;
					}
					else
					{
						cout << "[ ";
						for (int i = 0; i < list.size(); i++)
						{
							cout << list.at(i) << " ";
						}
						cout << "]" << endl;
						break;					
					}
				}
			case 'A':
			case 'a':
				{
					int num;
					cout << "Add a number to the list: ";
					cin >> num;
					list.push_back(num);
					cout << num << " was added" << endl;
					break;
				}
			case 'M':
			case 'm':
				{
					double mean = 0;
					double total = 0;
					int count = 0;
					if (list.size() == 0)
					{
						cout << "Unable to calculate the mean - no data" << endl;
						break;
					}
					else
					{
						for (int j = 0; j < list.size(); j++)
						{
							total += list.at(j);
							count++;
						}
						mean = total/count;
						cout << "Mean is: " << mean << endl;
						break;
					}
				}	
			case 'S':
			case 's':
				{
					int smallestNum = INT_MAX;
					if (list.size() == 0)
					{
						cout << "Unable to determine the smallest number - list is empty";
						break;
					}
					else
					{
						for (int k = 0; k < list.size(); k++)
						{
							if (smallestNum > list.at(k))
							{
								smallestNum = list.at(k);
							}
						}
						cout << "The smallest number is: " << smallestNum << endl;
						break;
					}

				}
			case 'L':
			case 'l':
			{
				int biggestNum = INT_MIN;
				if (list.size() == 0)
				{
					cout << "Unable to determine the largest number - list is empty" << endl;
					break;
				}
				else
				{
					for (int z = 0; z < list.size(); z++)
					{
						if (biggestNum < list.at(z))
						{
							biggestNum = list.at(z);
						}
					}
					cout << "The biggest number is: " << biggestNum << endl;
					break;
				}
			}
			default:
				{
					if (choice != 'Q' && choice != 'q')
					{
						cout << "Unknown selection, please try again" << endl;
						break;
					}
					else
					{
						cout << "Program Terminated" << endl;
						break;
					}
				}
				

		}
	}
	while (choice != 'Q' && choice != 'q');
	
	return 0;
 
}
