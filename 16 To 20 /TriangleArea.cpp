#include <iostream>
#include <string>
using namespace std;

void readNumber(float& A, float& H) {
	cout << "Please enter a Number A?" << endl;
	cin >> A;

	cout << "Please enter a Number H?" << endl;
	cin >> H;
}

float CalcTriangleArea(float A, float H) {
	float Area = (A / 2) * H;
	return Area;
}

void printResult(float AreaResult) {
	cout << "\n Triangle Area Result is: " << AreaResult << endl;
}

int main() {
	float A, H;
	
	readNumber(A, H);
	printResult(CalcTriangleArea(A, H));

	return 0;
}
