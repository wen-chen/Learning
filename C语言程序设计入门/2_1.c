#include <stdio.h>
int main() {
	int BJT = 0, UTC = 0;
	scanf("%d", &BJT);
	if (BJT / 100 >= 8) {
		UTC = BJT - 800;
	} else {
		UTC = BJT + 1600;
	}
	printf("%d", UTC);
}
