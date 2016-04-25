#include<stdio.h>
#include<stdlib.h>

int main() {
	char ch;
	int wordnum[10] = {0};
	int i, isword = 0, isbegin = 0, wordsize = 0;
	int wordcount = 0;
	ch = getchar();
	
	while(1) {
		if (ch ==' ' || ch=='\t' || ch== '\n' || ch == ',' || ch == '.' || ch == '?' || ch == '(' || ch == ')' || ch == '\"' ||ch == ':' || ch == EOF) {
			if(isword == 1) {
				if(wordsize <= 10)
					wordnum[wordsize - 1] = wordnum[wordsize - 1] + 1;
				wordsize = 0;
			}
			isword = 0;
		}else{
			if(isword == 0)
				wordcount++;
			isword = 1;
			wordsize++;
		}
		if(ch != EOF){
			ch = getchar();
		}
		else{
			break;
		}
	}
	
	printf("%d", wordcount);
	for(i = 0; i < 10; i++) { 
		printf(" %d", wordnum[i]);
    }
			
	return 0;
}

