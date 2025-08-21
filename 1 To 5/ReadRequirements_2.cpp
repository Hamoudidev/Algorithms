#include <iostream>
#include <string>
using namespace std;

struct stInfo {
	int Age;
	bool hasDriverLicense, hasRecommendation;
};

bool isAccepted(stInfo info) {
	if (info.hasRecommendation)
		return true;
	else
		return (info.Age >= 21 && info.hasDriverLicense);
}

stInfo readInfo() {
	stInfo info;

	cout << "Please enter your Age?" << endl;
	cin >> info.Age;

	cout << "Do you have a driver license?" << endl;
	cin >> info.hasDriverLicense;

	cout << "Do you have a recommendation?" << endl;
	cin >> info.hasRecommendation;

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
