#include <iostream>
#include <string>
using namespace std;

float readRedius() {
	float r;

	cout << "Please enter a Number r?" << endl;
	cin >> r;

	return r;
}

float CalcCircleArea(float r) {
	const float PI = 3.14;
	float Area = PI * pow(r, 2);
	return Area;
}

void printResult(float AreaResult) {
	cout << "\n Circle Area Result is: " << AreaResult << endl;
}

int main() {
	
	printResult(CalcCircleArea(readRedius()));

	return 0;
}
