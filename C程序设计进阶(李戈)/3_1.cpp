#include<iostream>
#include<cstring>
using namespace std;

void reverseString(char *, int, int);

int main() {
    int count = 100;
    char s[501];
    while(count--) {
        cin.getline(s, 500);
        reverseString(s, 0, strlen(s));
        cout << endl;
    }
    return 0;
}

void reverseString(char s[], int l, int len) {
    char tempStr[501];
    int tempLen = 0, i = l;
    bool isEmpty = false;
    for (; i < len; i++) {
        if(s[i] != ' ') {
            tempStr[tempLen++] = s[i];
        } else {
            while(tempLen) { 
			    cout << tempStr[--tempLen];                 
            }
            cout << ' ';
            isEmpty = true;
            reverseString(s, i+1, len);
            break;
        }
    }
    if (!isEmpty) {
        while(tempLen) { 
		    cout << tempStr[--tempLen];
        }
    }
    return;
}

