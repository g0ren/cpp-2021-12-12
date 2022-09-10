#include <iostream>
using namespace std;

unsigned long int min(unsigned long int a, unsigned long int b) {
	return (a <= b) ? a : b;
}

int main() {
	unsigned long int a { 0 }, b { 0 };
	cout << "Enter two integers:" << endl;
	cin >> a;
	cin >> b;
	cout << "List of all integers that divide both " << a << " and " << b << ":"
			<< endl;
	for (unsigned long int i = 1; i <= min(a, b) / 2; i++) {
		if (!(a % i) && !(b % i))
			cout << i << endl;
	}
	return 0;
}
