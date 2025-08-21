#include <iostream>
#include <string>
using namespace std;

string readName() {
	string name;
	cout << "Please enter your name?" << endl;
	getline(cin, name);

	return name;
}

void printName(string Name) {
	cout << "\nYour name is: " << Name << endl;
}

int main() {
	printName(readName());

	return 0;
}
