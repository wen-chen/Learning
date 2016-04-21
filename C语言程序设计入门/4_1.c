#include <stdio.h>
#include <math.h>
int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	int isPrime(n) {
		int isprime = 1;
		int i = 2;
		int n_root = sqrt(n) + 1;
		for (i; i < n_root; i++){
			if (n % i == 0) {
				isprime = 0;
				break;
			}
		}
		return isprime;
	}
	int i = 2, j = 0, s = 0;
    for (i; i < 10000; i++) {
    	if (isPrime(i)) {
    		j = j + 1;
    		if (n <= j && j <= m) {
    			s = s + i;
			}else if (j > m) {
				break;
			}
		}
	}
    printf("%d", s);
	return 0;
}
