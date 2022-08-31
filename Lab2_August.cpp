/*
Program that takes numerical input and outputs the word for the number.
i.e. 23 = "twenty three"
David Tinley
08/30/2022
*/

#include <iostream>

using std::cin; using std::cout; using std::endl;

int main() {

	int x;

	cout << "Please enter a number between 1 and 31: " << endl;

	cin >> x; // user inputs a number that is stored in the x integer variable

	int tens = x / 10; // extracts the digit that is in the "tenths" place of the # number entered
	int singles = x % 10; // extracts the digit that is in the "ones or singles" place of the # number entered

	// cout << tens << singles << endl;

	switch (tens) {

		//case 0:
			//cout << "single digit";
			//break;
	case 1:
		cout << "Ten";
		break;
	case 2:
		cout << "Twenty";
		break;

	case 3:
		cout << "Thirty";
		break;
	}

	switch (singles) {

	case 0:
		cout << "";
		break;

	case 1:
		cout << "One";
		break;

	case 2:
		cout << "Two";
		break;

	case 3:
		cout << "Three";
		break;

	case 4:
		cout << "Four";
		break;

	case 5:
		cout << "Five";
		break;

	case 6:
		cout << "Six";
		break;

	case 7:
		cout << "Seven";
		break;

	case 8:
		cout << "Eight";
		break;

	case 9:
		cout << "Nine";
		break;

	default:
		cout << "Please enter a number between 1 and 31.";
	}

}