#include <iostream>
#include <string>
using namespace std;

struct stInfo {
	int Age;
	bool hasDriverLicense;
};

bool isAccepted(stInfo info) {
	return (info.Age >= 21 && info.hasDriverLicense);
}

stInfo readInfo() {
	stInfo info;

	cout << "Please enter your Age?" << endl;
	cin >> info.Age;

	cout << "Do you have a driver license?" << endl;
	cin >> info.hasDriverLicense;

	return info;
}

void printResult(stInfo info) {
	if (isAccepted(info))
		cout << "\n Hired" << endl;
	else
		cout << "\n Rejected" << endl;
}

int main() {
	printResult(readInfo());

	return 0;
}
