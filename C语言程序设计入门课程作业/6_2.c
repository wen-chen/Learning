#include <stdio.h>
int main() {
	int A[100][100];
	int max[100], min[100];
	int n;
	scanf("%d", &n);
	if  (n == 1) {
		scanf("%d", &A[0][0]);
		printf("%d %d", 0, 0);
		return 0;
	}
	
	if (n > 1) {
		for (int i = 0; i < n; i++) {
		    max[i] = 0;
		    for (int j = 0; j < n; j++){
			    scanf("%d", &A[i][j]);			    
			    if (A[i][j] > max[i]) {
				    max[i] = A[i][j];
			    }			
		    }
	    }

	    for (int j = 0; j < n; j++) {
		    min[j] = A[0][j];
		    for (int i = 0; i < n; i++) {
			    if (A[i][j] < min[j]) {
				    min[j] = A[i][j];
			    }
		    }
	    }

	    int flag = 1;
	    for (int i = 0; i < n; i++) {
		    for (int j = 0; j < n; j++) {
			    if (A[i][j] == max[i] && A[i][j] == min[j]) {
				    printf("%d %d", i, j);
				    flag = 0;
			    }
		    }
	    }
	    
	    if (flag) {
		    printf("NO");
	    }	
	    return 0;
	}	
}
