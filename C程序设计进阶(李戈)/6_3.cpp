#include <iostream>
#include <vector>
using namespace std;

int main() {
    int m = 0, n = 0;
    cin >> m >> n;
    vector<vector<int> > matrix(m, vector<int>(n));
    vector<vector<char> > assist(m, vector<char>(n,'a'));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    if ((matrix[0][0] > matrix[0][1]) && (matrix[0][0] > matrix[1][0])) {
        assist[0][0] = '@';
    }
    if ((matrix[0][n - 1] > matrix[0][n-2]) && (matrix[0][n - 1] > matrix[1][n - 1])) {
        assist[0][n - 1] = '@';
    }
    if ((matrix[m - 1][0]>matrix[m - 1][1])&&(matrix[m - 1][0]>matrix[m - 2][0])) {
        assist[m - 1][0] = '@';
    }
    if ((matrix[m - 1][n - 1]>matrix[m - 1][n - 2])&&(matrix[m - 1][n - 1]>matrix[m - 2][n - 1])) {
        assist[m - 1][n - 1] = '@';
    }
    for (int j = 1; j < n - 1; j++) {
        if ((matrix[0][j] >= matrix[1][j]) && (matrix[0][j] >= matrix[0][j - 1]) && (matrix[0][j] >= matrix[0][j + 1])) {
            assist[0][j] = '@';
        }
    }
    for (int j = 1; j < n-1; j++) {
        if ((matrix[m - 1][j] >= matrix[m - 2][j]) && (matrix[m - 1][j] >= matrix[m - 1][j - 1])&&(matrix[m - 1][j] >= matrix[m - 1][j + 1])) {
            assist[m - 1][j] = '@';
        }
    }
    for (int i = 1; i < m - 1; i++) {
        if ((matrix[i][0] >= matrix[i - 1][0]) && (matrix[i][0]>=matrix[i+1][0]) && (matrix[i][0] >= matrix[i][1])) {
            assist[i][0] = '@';
        }
    }
    for (int i = 1; i < m - 1; i++) {
        if ((matrix[i][n - 1] >= matrix[i - 1][n - 1])&&(matrix[i][n - 1] >= matrix[i + 1][n - 1]) && (matrix[i][n - 1] >= matrix[i][n - 2])) {
            assist[i][n-1] = '@';
        }
    }
    for (int i = 1; i < m - 1; i++) {
        for (int j = 1; j < n - 1; j++)
        {
            if ((matrix[i][j] >= matrix[i - 1][j]) && (matrix[i][j] >= matrix[i + 1][j]) && (matrix[i][j] >= matrix[i][j - 1]) && (matrix[i][j] >= matrix[i][j + 1])) {
                assist[i][j] = '@';
            }
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (assist[i][j] == '@') {
                cout << i << ' ' << j << endl;
            }
        }
    }
    return 0;
}
