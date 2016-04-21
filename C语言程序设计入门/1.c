#include <stdio.h>
int main(){
	int x = 0, y = 0, a = 0, b = 0, c = 0;
	scanf("%d", &x);
	a = x / 100;
	b = (x - a * 100) / 10;
	c = x - a * 100 - b * 10;
	y = c * 100 + b * 10 + a;
	printf("%d", y);
}
