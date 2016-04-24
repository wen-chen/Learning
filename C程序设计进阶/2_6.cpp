#include <iostream>
using namespace std;
//每天将标记的人感染，并标记第二天将要感染的人标记
int main() {	
	int n, m;
	cin >> n;
	char a[n][n];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
	cin >> m;
	for (int d = 1; d <= m; d++) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (a[i][j] == '!') { //将前一天标记的人感染 
					a[i][j] = '@';
				}
			}
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (a[i][j] == '@') { //将感染者周围的人标记 
					if (i + 1 < n && a[i + 1][j] == '.') {
						a[i + 1][j] = '!';
					} 
					if (j - 1 >= 0 && a[i][j - 1] == '.') {
						a[i][j - 1] = '!';
					}
					if (j + 1 < n && a[i][j + 1] == '.') {
						a[i][j + 1] = '!';
					}
					if (i - 1 >= 0 && a[i - 1][j] == '.') {
						a[i - 1][j] = '!';
					}
				}
			}
		}
	}
	int sum = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (a[i][j] == '@') {
				sum = sum + 1;
			}
		}
	} 
	cout << sum << endl;
	return 0;
}
