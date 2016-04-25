#include <iostream>
using namespace std;

int main() {
	int d, h, p, t;
	for (d = 1; d <= 4; d++) {
		for (h = 1; h <= 4; h++) {
			for (p = 1; p <= 4; p++) {
				for (t = 1; t <= 4; t++) {
					if ((d != h && d != p && d != t && h != p && h != t && p != t)
					&&((d == 1) + (h == 4) + (p == 3) == 1)
                    &&((h == 1) + (d == 4) + (p == 2) + (t == 3) == 1)
                    &&((h == 4) + (d == 3) == 1)
                    &&((p == 1) + (t == 4) + (h == 2) + (d == 3) == 1)
                    &&((d + h + p + t) == 10)) {
	                    cout << p << endl << d << endl << t << endl << h<< endl;
                    }
				}
			}
		}
	}
	return 0;
}
