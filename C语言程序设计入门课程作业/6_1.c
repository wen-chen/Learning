#include <stdio.h>
int main() {
	//读入多项式1
    int power = 0, coefficient = 0;
	int ploynom1[101] = {0};	
	do {
		scanf("%d %d", &power, &coefficient);
		ploynom1[power] = coefficient;
	}	while (power); 
	
	//读入多项式2	
	int ploynom2[101] = {0};	
	do {
		scanf("%d %d", &power, &coefficient);
		ploynom2[power] = coefficient;
	}	while (power); 
	
	//遍历两个数组并输出	
	int flag = 0;
	int i; 
	for (i = 100; i > 1; i--) {
		coefficient = ploynom1[i] + ploynom2[i];
		if (coefficient) {
			if (coefficient > 0) {
				if (flag) {
					printf("+");
				}
			}
			if (coefficient == -1) {
				printf("-x%d", i);
			} else if (coefficient == 1) {
				printf("x%d", i);
			} else {
				printf("%dx%d", coefficient, i);
			}			
			flag = 1;
		}
    }
    
    coefficient = ploynom1[1] + ploynom2[1];
	if (coefficient) {
		if (coefficient > 0) {
			if (flag) {
				printf("+");
			}		
		} 
		if (coefficient == -1) {
			printf("-x");
		} else if (coefficient == 1) {
			printf("x");
		} else {
			printf("%dx", coefficient);;
		}
		flag = 1;		
	}
			
	coefficient = ploynom1[0] + ploynom2[0];
	if (coefficient) {
		if (coefficient > 0) {
			if (flag) {
				printf("+");
			}
		} 
		printf("%d", coefficient);
	}
	if (!flag) {
		printf("%d", 0);
	}		
	return 0;
}
