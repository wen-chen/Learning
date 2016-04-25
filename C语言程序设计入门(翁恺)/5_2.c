#include <stdio.h>
#include <math.h>

int isPerfect(int n);
int main() {
	int n = 1, m = 1;
	scanf("%d %d", &n, &m);
	int x = 0;
	for (n; n <= m; n++) {
		if (isPerfect(n)) {
			if (x) {
				printf("%d ", x);
				x = n;
			} else {
				x = n;
			}
		}
	}
	if (x) {
		printf("%d", x);
	} else {
		printf("\n");
	}
	return 0;
}

int isPerfect(int n) {
	int isperfect = 0;
	int i = 1, sum = 0;
	for (i; i < n; i++) {
		if (n % i == 0) {
			sum = sum + i;
		}	
	}
	if (sum == n) {
		isperfect = 1;
	}
	return isperfect;
}

