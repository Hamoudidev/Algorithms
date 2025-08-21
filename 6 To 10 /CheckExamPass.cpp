#include <iostream>
#include <string>
using namespace std;

enum enPassFail { Pass = 1, Fail = 2 };

float readMark() {
	float Mark;

	cout << "Please enter your Mark?" << endl;
	cin >> Mark;

	return Mark;
}

enPassFail checkPass(float Number) {
	if (Number >= 50)
		return enPassFail::Pass;
	else
		return enPassFail::Fail;
}

void printResult(float Number) {
	if(checkPass(Number) == enPassFail::Pass)
		cout << "\n Student passed the exam" << endl;
	else 
		cout << "\n Student failed to pass the exam" << endl;
}

int main() {
	printResult(readMark());
	return 0;
}
