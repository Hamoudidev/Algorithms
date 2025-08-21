#include <iostream>
#include <string>
using namespace std;

void readNumber(float& Height, float& Width) {
	cout << "Please enter a Height?" << endl;
	cin >> Height;

	cout << "Please enter a Width?" << endl;
	cin >> Width;
}

float CalcRectangleArea(float Height, float Width) {
	return Height * Width;
}

void printResult(float AreaResult) {
	cout << "\n Rectangle Area Result is: " << AreaResult << endl;
}

int main() {
	float Height, Width;
	
	readNumber(Height, Width);
	printResult(CalcRectangleArea(Height, Width));

	return 0;
}
