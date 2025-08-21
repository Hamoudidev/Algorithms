#include <iostream>
#include <string>
using namespace std;

void readNumber(float& A, float& D) {
	cout << "Please enter a Number A?" << endl;
	cin >> A;

	cout << "Please enter a Number D?" << endl;
	cin >> D;
}

float CalcRectangleArea(float A, float D) {
	float Area = A * sqrt(pow(D, 2) - pow(A, 2));
	return Area;
}

void printResult(float AreaResult) {
	cout << "\n Rectangle Area Result is: " << AreaResult << endl;
}

int main() {
	float A, D;
	
	readNumber(A, D);
	printResult(CalcRectangleArea(A, D));

	return 0;
}
