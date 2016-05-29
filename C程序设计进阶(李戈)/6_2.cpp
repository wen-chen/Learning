#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        char a[256] = {0};
        char b[256] = {0};
        cin >> a;
        for (int j = 0; j < strlen(a); j++) {
            switch(a[j]) {
            	case 'A': b[j] = 'T'; break;
                case 'T': b[j] = 'A'; break;
                case 'G': b[j] = 'C'; break;
                case 'C': b[j] = 'G'; break;
                default: break;
            }
        }
        cout << b << endl;
    }
    return 0;
}

