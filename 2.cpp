#include <iostream>
using namespace std;

int d1(int c) {
	return c / 100;
}

int d2(int c) {
	return c / 10 % 10;
}

int d3(int c) {
	return c % 10;
}

int main() {
	const int min { 100 }, max { 999 };
	int c { 0 };
	for (int i = min; i <= max; i++) {
		if (d1(i) != d2(i) && d1(i) != d3(i) && d2(i) != d3(i))
			c++;
	}
	cout << "There are " << c << " numbers between " << min << " and " << max
			<< " that have all different digits.";
	return 0;
}
