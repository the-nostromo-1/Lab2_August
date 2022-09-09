// Program that takes numerical input and outputs the word for the number.
// i.e. 23 = "twenty three"
// David Tinley
// 08/30/2022


#include <iostream>

using namespace std;

int main() {

	int number_input;

	cout << "Please enter a number between 1 and 39: \n";

	cin >> number_input; // user inputs a number that is stored in the x integer variable

	int tens = number_input / 10; // extracts the digit that is in the "tenths" place of the # number entered
	int singles = number_input % 10; // extracts the digit that is in the "ones or singles" place of the # number entered

	switch (number_input) { // checking the number_input variable for values 11 - 19

	case 11:
		cout << "Eleven\n";
		return 0; // return 0 will have the program cease and not jump to the tens and singles cases since they would be unnecessary
	case 12:
		cout << "Twelve\n";
		return 0;
	case 13:
		cout << "Thirteen\n";
		return 0;
	case 14:
		cout << "Fourteen\n";
		return 0;
	case 15:
		cout << "Fifteen\n";
		return 0;
	case 16:
		cout << "Sixteen\n";
		return 0;
	case 17:
		cout << "Seventeen\n";
		return 0;
	case 18:
		cout << "Eighteen\n";
		return 0;
	case 19:
		cout << "Nineteen\n";
		return 0;
	}

	switch (tens) { // switch is a selection statement that tests each case below

	case 0:
		cout << "";
		break;
	case 1:
		cout << "Ten ";
		break;
	case 2:
		cout << "Twenty ";
		break;
	case 3:
		cout << "Thirty ";
		break;
	default:
		cout << "Please enter a number between 1 and 39.";
		return 0;
	}

	switch (singles) {

	case 1:
		cout << "One\n";
		break;
	case 2:
		cout << "Two\n";
		break;
	case 3:
		cout << "Three\n";
		break;
	case 4:
		cout << "Four\n";
		break;
	case 5:
		cout << "Five\n";
		break;
	case 6:
		cout << "Six\n";
		break;
	case 7:
		cout << "Seven\n";
		break;
	case 8:
		cout << "Eight\n";
		break;
	case 9:
		cout << "Nine\n";
		break;
	}
	return 0;
}