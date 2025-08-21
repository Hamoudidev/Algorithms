#include <iostream>
#include <string>
using namespace std;

float readNumber() {
	float Number;

	cout << "Please enter a Number?" << endl;
	cin >> Number;

	return Number;
}

float HalfOfNumber(float Number) {
	return Number / 2;
}

void printResult(float Number) {
	string result = "\n Half of " + to_string(Number) + " is " + to_string(HalfOfNumber(Number));
	cout << result << endl;
}

int main() {
	printResult(readNumber());

	return 0;
}
