#include <iostream>
#include <string>
using namespace std;

enum enNumbersType { Odd = 1, Even = 2 };

int readNumber() {
	int number;
	cout << "Please enter a Number?" << endl;
	cin >> number;

	return number;
}

enNumbersType checkNumberType(int number) {
	int result = number % 2;
	if (result == 0)
		return enNumbersType::Even;
	else
		return enNumbersType::Odd;
}

void printCheck(enNumbersType NumberType) {
	if (NumberType == enNumbersType::Even)
		cout << "Your number is: Even" << endl;
	else
		cout << "Your number is: Odd" << endl;
}

int main() {
	printCheck(checkNumberType(readNumber()));
	return 0;
}
