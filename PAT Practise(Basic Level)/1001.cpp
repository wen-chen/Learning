#include <iostream>
using namespace std;

int main() {
	int n = 1, step = 0;
	cin >> n;
	while (n != 1) {
		if (n % 2 == 0) {
			n = n / 2;
			step = step + 1;
		} else {
			n = (3 * n + 1) / 2;
			step = step + 1;
		}
	}
	cout << step << endl;
	return 0;
} 
