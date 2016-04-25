#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int id[n];
	double rate[n];
	for (int i = 0; i < n; i++) {
		int start, stop;
		cin >> id[i] >> start >> stop;
		rate[i] = (double) stop/start;
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (rate[j + 1] > rate[j]) {
				int id_tmp = id[j];
				id[j] = id[j + 1];
				id[j + 1] = id_tmp;
				double rate_tmp = rate[j];
				rate[j] = rate[j + 1];
				rate[j + 1] = rate_tmp;
			}
		}
	}

	double max_rate_diff = 0;
	int max_id = 0;
	for (int i = 0; i < n -1; i++) {
		double rate_diff = rate[i] - rate[i + 1];
		if (max_rate_diff < rate_diff) {
			max_rate_diff = rate_diff;
			max_id = i;
		}
	}

	cout << max_id + 1 << endl;
	for (int i = max_id; i >= 0; i--) {
		cout << id[i] << endl;
	}
	
	cout << n - max_id - 1 << endl;
	for (int i = n - 1; i >= max_id + 1; i--) {
		cout << id[i] << endl;
	}
	return 0;
}
