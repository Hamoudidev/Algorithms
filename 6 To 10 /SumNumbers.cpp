#include <iostream>
#include <string>
using namespace std;

void readNumbers(int& Num1, int& Num2, int& Num3) {
	cout << "Please enter a Number 1?" << endl;
	cin >> Num1;

	cout << "Please enter a Number 2?" << endl;
	cin >> Num2;

	cout << "Please enter a Number 3?" << endl;
	cin >> Num3;
}

int Sum3Numbers(int Num1, int Num2, int Num3) {
	int result = Num1 + Num2 + Num3;
	return result;
}

void printResult(float Number) {
	cout << "\n The total sum of numbers is: " << Number << endl;
}

int main() {
	int Num1, Num2, Num3;
	readNumbers(Num1, Num2, Num3);
	printResult(Sum3Numbers(Num1, Num2, Num3));
	return 0;
}
