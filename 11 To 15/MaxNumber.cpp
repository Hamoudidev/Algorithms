#include <iostream>
#include <string>
using namespace std;

void readNumber(int &Num1, int &Num2) {
	cout << "Please enter a Number 1?" << endl;
	cin >> Num1;

	cout << "Please enter a Number 2?" << endl;
	cin >> Num2;
}

int MaxOf2Numbers(int Num1, int Num2) {
	if (Num1 > Num2)
		return Num1;
	else
		return Num2;
}

void printResult(int maxNumber) {
		cout << "\n The Maximum Number is: " << maxNumber << endl;
}

int main() {
	int Num1, Num2;
	
	readNumber(Num1, Num2);
	printResult(MaxOf2Numbers(Num1, Num2));

	return 0;
}
