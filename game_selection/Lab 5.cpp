/*
-------------------------------------
              CS 215 -- 003
				  Lab 5
-------------------------------------

Author: Bram Hampton
Date: 2/12/2018
Description:
*/

#include <iostream>
using namespace std;

int main() {
	char userSelection;
	int numStart, numEnd, sum, boxSize;
	do {
		cout << "\nSELECT A GAME" << endl;
		cout << "---------------" << endl;
		cout << "S - Sum Between" << endl << "B - Print Box" << endl << "X - exit" << endl << "Enter option:  ";
		cin >> userSelection;

		switch (userSelection) {
		case 'x':
		case 'X':
			break;
		case 's':
		case 'S':
			cout << "\n\nPlease enter a number to start counting at:        ";
			cin >> numStart;
			cout << "\nNow please enter the number to stop counting at:   ";
			cin >> numEnd;
			sum = 0;
			for (int i = numStart; i <= numEnd; i++) {
				sum += i;
			}
			cout << endl << "The sum is " << sum << endl << endl;
			break;
		case 'B':
		case 'b':
			cout << "Please enter size of your box:         ";
			cin >> boxSize;
			cout << endl;
			for (int i = 0; i < boxSize; i++) {
				cout << "* ";
				for (int i = 1; i < boxSize; i++) {
					cout << "* ";
				}
				cout << endl;
			}
			cout << endl << endl;
			break;
		default:
			cout << "Invalid option! Try again!";
			break;
		}
	} while (userSelection != 'x' && userSelection != 'X');

	cout << "\nThanks for playing!\n";

	system("pause");
	return 0;
}