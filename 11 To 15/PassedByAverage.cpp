#include <iostream>
#include <string>
using namespace std;

enum enPassFail { Pass = 1, Fail = 2 };

void readNumber(int &Mark1, int &Mark2, int &Mark3) {
	cout << "Please enter a Mark 1?" << endl;
	cin >> Mark1;

	cout << "Please enter a Mark 2?" << endl;
	cin >> Mark2;

	cout << "Please enter a Mark 3?" << endl;
	cin >> Mark3;
}

int Sum3Marks(int Mark1, int Mark2, int Mark3) {
	return Mark1 + Mark2 + Mark3;
}

float calculateAverage(int Mark1, int Mark2, int Mark3) {
	return (float) (Sum3Marks(Mark1, Mark2, Mark3)) / 3;
}

enPassFail checkAverage(float Average) {
	if (Average >= 50)
		return enPassFail::Pass;
	else
		return enPassFail::Fail;
}

void printResult(float Average) {
	cout << "\n Your Average is: " << Average << endl;
	if (checkAverage(Average) == enPassFail::Pass)
		cout << "\n You Passed" << endl;
	else
		cout << "\n You Failed" << endl;
}

int main() {
	int Mark1, Mark2, Mark3;
	
	readNumber(Mark1, Mark2, Mark3);
	printResult(calculateAverage(Mark1, Mark2, Mark3));

	return 0;
}
