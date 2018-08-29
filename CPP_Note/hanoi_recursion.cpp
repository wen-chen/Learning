#include <iostream>

void move(int m, char x, char y, char z) {
	if (m == 1) {
		std::cout << x << " --> " << z << std::endl;
	} else {
		move(m - 1, x, z, y);
		std::cout << x << " --> " << z << std::endl;
		move(m - 1, y, x, z);
	}
}

int main() {
	int n;
	std::cout<< "please input a int:" << std::endl;
	std::cin >> n;
	move(n, 'A', 'B', 'C');
	return 0;
}
