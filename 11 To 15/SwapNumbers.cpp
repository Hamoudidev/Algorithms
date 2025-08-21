#include <iostream>
#include <string>
using namespace std;

void readNumber(int &Num1, int &Num2) {
	cout << "Please enter a Number 1?" << endl;
	cin >> Num1;

	cout << "Please enter a Number 2?" << endl;
	cin >> Num2;
}

void Swap(int &Num1, int &Num2) {
	int TempNumber;
	TempNumber = Num1;
	Num1 = Num2;
	Num2 = TempNumber;
}

void printResult(int Num1, int Num2) {
	cout << "\n Number1 = " << Num1;
	cout << "\n Number2 = " << Num2 << endl;
}

int main() {
	int Num1, Num2;
	
	readNumber(Num1, Num2);
	printResult(Num1, Num2);

	Swap(Num1, Num2);
	printResult(Num1, Num2);

	return 0;
}
