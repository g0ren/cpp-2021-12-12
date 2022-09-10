#include <iostream>
using namespace std;

int main() {
	int n { 0 }, m { 1 }, r { 0 };
	cout << "Enter an integer: ";
	cin >> n;
	while (n != 0) {
		if (n % 10 != 3 && n % 10 != 6) {
			r += n % 10 * m;
			m *= 10;
		}
		n /= 10;
	}
	cout << "Without 3s and 6s it's " << r << endl;
	return 0;
}
