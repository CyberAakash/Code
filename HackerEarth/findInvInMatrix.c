





#include <stdio.h>
#include <stdlib.h>

int main() {

    int T;
    scanf("%d", &T);
    while(T > 0) {

        int N;
        scanf("%d", &N);

        int** M = (int**)malloc(N*sizeof(int*));
        for(int i = 0; i < N; i++) {
            M[i] = (int*)malloc(N*sizeof(int));
        }

        for(int i = 0; i < N; i++) {
            for(int j = 0; j < N; j++) {
                scanf("%d", &M[i][j]);
            }
        }

        int inv = 0;
        for(int i = 0; i < N; i++) {
            for(int j = 0; j < N; j++) {
              for (int p = i; p < N; p++) {
                for (int q = (p == i) ? j + 1 : 0; q < N; q++) {
                    if (M[i][j] > M[p][q]) {
                        inv++;
                    }
                }
            }  
            }
        }

        printf("%d", inv);

        for(int i = 0; i < N; i++) {
            free(M[i]);
        }
        free(M);

        T--;
    }

    return 0;
}

