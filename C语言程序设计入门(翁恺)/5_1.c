#include <stdio.h>
#include <math.h>

int isPrime(int n);
int deprime(int n);
int main() {
	int n = 2;
	scanf("%d", &n);
	printf("%d=", n);
	if (isPrime(n)) {
		printf("%d", n);
	} else {
		deprime(n);		
	}	
	return 0;
}

int isPrime(int n) {
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

int deprime(int n) {
	if (isPrime(n)) {
		printf("%d", n);
	} else {
		int i = 2;
	    while (i <= n / 2) {
		    if (n % i == 0) {
			    printf("%dx", i);
			    return deprime(n / i);
		    }
		    i = i + 1;
	    }
	}	
}
