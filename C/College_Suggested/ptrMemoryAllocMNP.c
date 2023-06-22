//int ***ptr
//int m,n,p

//After getting input,
//How to allocate memory for ptr

#include <stdio.h>
#include <stdlib.h>

int main() {

    int ***ptr
    int m,n,p;

    ptr = (int ***) malloc(m*sizeof(int**));
    for (int i=0; i<m; i++) {
        ptr[i] = (int **) malloc(n*sizeof(int*));
        for (int j=0; j<n; j++) {
            ptr[i][j] = (int *) malloc(p*sizeof(int));
        }
    }

    return 0;
}