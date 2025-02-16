#include <iostream>
using namespace std;

double min(double a, double b) {
	return a > b ? a : b;
}

int main() {
	double a, b;

	cout << "Input your number: " << endl;
	cin >> a >> b;

	cout << "max value is: " << min(a, b) << endl;

	return 0;
}