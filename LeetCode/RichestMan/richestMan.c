#include<stdio.h>

int main() {

    int accountsColSize = 3,accountsSize = 3;
    int accounts[3][3] = {{2,8,7},{7,1,3},{1,9,5}};
    int max = 0;
    for(int i = 0; i < accountsColSize; i++) {
        max += accounts[0][i];
    }
    for(int i = 1; i < accountsSize; i++) {
        int sum = 0;
        for(int j = 0; j < accountsColSize; j++) {
            sum += accounts[i][j];
        }
        if(sum > max) {
            max = sum;
        }
    }

    // return max;
    printf("%d", max);
}