#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int x[n];
	for (int i = 0; i < n; i++) {
		cin >> x[i];
	}
	int flag = 1;
	for (int i = 0;i< n; i++) {
		if (x[i] == i) {
			cout << i << endl;
			flag = 0;
			break;
		}
	}
	if (flag) {
		cout << "N" << endl;
	}
	return 0;
}
