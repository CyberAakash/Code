// Monk and Inversions
// Monk's best friend Micro, who happen to be an awesome programmer, got him an integer matrix M of size  for his birthday. Monk is taking coding classes from Micro. They have just completed array inversions and Monk was successful in writing a program to count the number of inversions in an array. Now, Micro has asked Monk to find out the number of inversion in the matrix M. Number of inversions, in a matrix is defined as the number of unordered pairs of cells such that .
// Monk is facing a little trouble with this task and since you did not got him any birthday gift, you need to help him with this task.

// Video approach to solve this question: here

// Input:
// First line consists of a single integer T denoting the number of test cases.
// First line of each test case consists of one integer denoting N. Following N lines consists of N space separated integers denoting the matrix M.

// Output:
// Print the answer to each test case in a new line.

// Constraints:




// Sample Input
// 2
// 3
// 1 2 3
// 4 5 6
// 7 8 9
// 2
// 4 3
// 1 4
// Sample Output
// 0
// 2





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
                for(int p = i; p < N; p++) {
                    for(int q = j; q < N; q++) {
                        if(M[i][j] > M[p][q]) {
                            inv++;
                        }
                    }
                }
            }
        }

        printf("%d\n", (inv == 0) ? 0 : inv);

        for(int i = 0; i < N; i++) {
            free(M[i]);
        }
        free(M);

        T--;
    }

    return 0;
}

