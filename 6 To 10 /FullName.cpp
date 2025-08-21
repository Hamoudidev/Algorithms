#include <iostream>
#include <string>
using namespace std;

struct userInfo {
	string firstName, lastName;
};

userInfo readInfo() {
	userInfo info;

	cout << "Please enter your FirstName?" << endl;
	cin >> info.firstName;

	cout << "Please enter your LastName?" << endl;
	cin >> info.lastName;

	return info;
}

string getFullName(userInfo info) {
	string FullName;

	FullName = info.firstName + " " + info.lastName;
	return FullName;
}

void printFullName(string FullName) {
	cout << "\n Your FullName is: " << FullName << endl;
}

int main() {
	printFullName(getFullName(readInfo()));
	return 0;
}
