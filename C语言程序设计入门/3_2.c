#include <stdio.h>
int main(){
	int x = 0, n = 0, m = 1, j = 0 ,p = 1, y = 0;
	scanf("%d", &x);
	while (x != 0){
		n = x % 10;
		x = x / 10;
		if (n % 2 == m % 2){
			j = 1;
		}else{
			j = 0;
		}
		y = y + j * p;
		m = m + 1;
		p = p * 2;
	}
	printf("%d", y);
}
