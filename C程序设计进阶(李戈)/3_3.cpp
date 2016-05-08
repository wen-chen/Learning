#include <iostream> 
using namespace std; 

char boy, girl;  
char a[101] = {};
int queue(int); 
  
int main() {	
	cin >> a;
	boy = a[0];
	int i = 0;
	while (a[i] == boy) {
		i = i + 1;
	}
	girl = a[i];
	queue(0);
	return 0;		
}  

int queue(int n) {
	if (a[n] == girl) {
		return n;
	}
	if (a[n] == 0) {
		return n;
	}
	int m = n + 1;
	while (a[m] != 0 && a[m] != girl) {
		m = queue(m);
	}
	if (a[m] == girl) {
		cout << n << ' ' << m << endl;
		return m + 1;
	} else {
		return m;
	}
}
