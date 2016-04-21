#include <stdio.h>
int main() {
	char a[100];
	scanf("%[^\.]s", a);
	int i = 0, len = 0;
	while (a[i] != '\0') {
		if (a[i] == ' ') {
			if (len != 0) {
				printf("%d ", len);
				len = 0;
			}		
		} else {
			len = len + 1;
		}
		i = i + 1;		
	}
    if (len != 0) {
		printf("%d", len);
	} else {
		printf("\n");
	}	
	return 0;
} 
