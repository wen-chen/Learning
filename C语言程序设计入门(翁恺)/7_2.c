#include <stdio.h>
#include <string.h>

int main() {
	char s[1000];  
	char H[3], M[3], S[3];
	int h = 0;
		
	// 每次取一条条GPS语句进行分析 
	do {		
	    gets(s);
	    int isGPRMC(char *s);	   
	    int check(char *s);	

	    if (isGPRMC(s)) { //判断是否为GPRMC语句   	
            if (check(s)) { //判断是否校验值是否正确 
    	        const char * split = ",";
	            char * p;
                p = strtok(s, split);
                p = strtok(NULL, split);
                char * s2 = p;
                p = strtok(NULL, split);
                char * s3 = p;
                if (s3[0] == 'A') { //判断是否有定位信息            	
                    H[0] = s2[0];
                    H[1] = s2[1];
                    H[2] = '\0';
                    M[0] = s2[2];
                    M[1] = s2[3];
                    M[2] = '\0';
                    S[0] = s2[4];
                    S[1] = s2[5];
                    S[2] = '\0';
                    sscanf(H,"%d", &h);
                    if (h + 8 > 23) {
    	                h = h - 16;
	                } else {
		                h = h + 8;
	                }            	
			    }
	        } 
		}
	} while (strcmp("END", s)); //读到"END"终止读入 
	
	//将时间打印输出 
	if (h > 9) {
		printf("%d", h / 10);
		h = h % 10;
		printf("%d", h);
	} else {
		printf("%d%d", 0, h);
	}
	printf(":%s:%s", M, S);
	
	return 0;
}

//下面的函数用于判断是否为GPRMC语句 
int isGPRMC(char *s) {
	const char GPRMC[] = "$GPRMC";
	int flag = 1;
	for (int i = 0; i < 6; i++) {
		if (GPRMC[i] != s[i]) {
			flag = 0;
			break;
		}
	}
	return flag;
}

//下面的函数用于判断是否校验值是否正确 
int check(char *s) {
	int i = 3, checksum1 = s[1] ^ s[2];
	while (s[i] != '*') {
		checksum1 = checksum1 ^ s[i];
	    i = i + 1;
    }
	int checksum2 = 0;
	char checksum2s[3];
	checksum2s[0] = s[i + 1];
	checksum2s[1] = s[i + 2];
	checksum2s[2] = '\0';
	sscanf(checksum2s,"%x", &checksum2);
	if (checksum1 == checksum2) {
		return 1;
	} else {
		return 0;
	}
}
