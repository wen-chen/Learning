#include <iostream>
#include <iomanip>
using namespace std;

int isLeap (int year);
int main() {
	int y, m, d, year, month, day;
	char tmp;
	cin >> y >> tmp >> m >> tmp >> d;
	int month_flag = 0, year_flag = 0;
	if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
		if (d == 31) {
			day = 1;
			month_flag = 1;
		} else {
			day = d + 1;
		}
	} else if (m == 2) {
		if (isLeap(y)) {
			if (d == 29) {
				day = 1;
				month_flag = 1;
			} else {
				day = d + 1;
			}
		} else {
			if (d == 28) {
				day = 1;
				month_flag = 1;
			} else {
				day = d + 1;
			}
		}
	} else {
		if (d == 30) {
			day = 1;
			month_flag = 1;
		} else {
			day = d + 1;
		}
	}

    month = m + month_flag;
	if (month > 12) {
		month = 1;
		year_flag = 1;
	}
	year = y + year_flag;
	cout << year << '-';
	cout << setw(2) << setfill('0') << month << '-';
	cout << setw(2) << setfill('0') << day << endl;
	return 0;
}

int isLeap (int year) {
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
		return 1;
	} else {
		return 0;
	}
}
