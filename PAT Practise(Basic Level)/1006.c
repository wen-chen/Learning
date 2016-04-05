#include <stdio.h>
int main() {
	int x;
	scanf("%d", &x);
	int d = x / 100;
	while (d != 0) {
		printf("B");
		d--;
	}
	x = x % 100;
	d = x / 10;
	while (d != 0) {
		printf("S");
		d--;
	}
	x = x % 10;
	int i = 1;
	for (i; i <= x; i++){
		printf("%d", i);
	}
	return 0;
}
