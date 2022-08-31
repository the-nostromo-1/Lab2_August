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

	cin >> x;

	int tens = x / 10;
	int singles = x % 10;

	// cout << tens << singles << endl;

	switch (tens) {

	case 0:
		break;

	case 1:
		cout << "Ten";
		break;

	}

}