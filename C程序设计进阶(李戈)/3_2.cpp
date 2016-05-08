#include <iostream>
using namespace std;

void conjecture(int);

int main() {
	int n;
	cin >> n;	
	conjecture(n);	
	return 0;
} 

void conjecture(int n) {
	if (n == 1) {
		cout << "End" << endl;
	} else {
		int m;
		if (n % 2 == 1) {
			m = 3 * n + 1;
			cout << n << "*3+1=" << m << endl;
			return conjecture(m);
		} else {
			m = n / 2;
			cout << n << "/2=" << m << endl;
 			return conjecture(m);
		}
	}	
}
