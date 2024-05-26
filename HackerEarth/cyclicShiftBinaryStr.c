#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int binaryToDecimal(char* s) {
	int num = atoi(s);
    return num;
}

int main() {

	int T;
	scanf("%d", &T);
	while(T > 0) {

		int N, K;
		scanf("%d %d", &N, &K);

		char* A = (char*)malloc((N)*sizeof(char));
        fflush(stdin);
		fgets(A, N+1, stdin);
        printf("%s", A);

		T--;
	}

	return 0;
}