#include <iostream>
using namespace std;

int main() {
	unsigned long int a { 0 };
	cout << "Enter an integer: ";
	cin >> a;
	cout << "List of all integers that divide " << a << ":" << endl;
	for (unsigned long int i = 1; i <= a / 2; i++) {
		if (!(a % i))
			cout << i << endl;
	}
	return 0;
}
