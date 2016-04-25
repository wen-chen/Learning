#include <stdio.h>
int main(){
	int x = 0, odd = 0, even = -1;
	do {
		scanf("%d", &x);
		if (x % 2 == 1){
			odd++;
		}else{
			even++;
		}
	}while (x != -1);
	printf("%d %d", odd, even);
}
