#include <iostream>
using namespace std;

int main() {
	unsigned long int a { 0 }, b { 1 };
	cout << "Enter number A: ";
	cin >> a;
	cout << "List of numbers B such that B*B|A and B*B*B!|A:" << endl;
	for (b = 1; b * b <= a; b++) {
		if (a % (b * b * b) && !(a % (b * b)))
			cout << b << endl;
	}
	return 0;
}
