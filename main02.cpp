#include <iostream>
using namespace std;

bool check(int age) {
	return age >= 18;
}

int main() {
	int age;

	cout << "Input your number: " << endl;
	cin >> age;

	cout << (check(age) ? "Yes" : "No") << endl;

	return 0;
}