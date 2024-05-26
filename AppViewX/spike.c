

#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[100], output[100][2];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int spike = 0;
    int stable = arr[0];
    for(int i = 0; i < n; i++) {
        if(arr[i] == stable) {
            continue;
        }
        else { // there is a spike
            spike++;
            int pos = i;
            for(int j = i + 1; j < n; j++) {
                if(arr[j] != stable) {
                    continue;
                }
                int end = j;
                int span = end - pos + 1;
                output[spike][0] = pos - 1;
                output[spike][1] = span;
                i = end;
                break;
            }
        }
    }
    printf("------------OUTPUT------------\n");
    printf("%d\n", spike);
    for(int i = 1; i <= spike; i++) {
        for(int j = 0; j < 2; j++) {
            printf("%d ", output[i][j]);
        }
        printf("\n");
    }
    return 0;
}
