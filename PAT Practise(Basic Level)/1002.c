#include <stdio.h>
int main() {
	char n[101];
	scanf("%s", n);
	int i = 0, x = 0;
	while (n[i] != '\0') {
		x = x + (n[i] - '0');
		i = i + 1;
	}
	int mask = 1;
	int t = x;
	while (t > 9) {
		t = t / 10;
		mask = mask * 10;
	}
	do {
		int d = x / mask;
		switch (d) {
			case 0:
				printf("ling");
				break;
			case 1:
				printf("yi");
				break;
			case 2:
				printf("er");
				break;
			case 3:
				printf("san");
				break;
			case 4:
				printf("si");
				break;
			case 5:
				printf("wu");
				break;
			case 6:
				printf("liu");
				break;
			case 7:
				printf("qi");
				break;
			case 8:
				printf("ba");
				break;
			case 9:
				printf("jiu");
				break;
		}
		if (mask > 9) {
			printf(" ");
		}
		x = x % mask;
		mask = mask / 10;
	} while (mask > 0);
	printf("\n");
	return 0;
}
