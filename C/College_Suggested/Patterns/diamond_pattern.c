//       1
//    2      3
//  4  5   6  7
// 8 9  1 2 3  4 5
//  4  5   6  7
//    2      3
//       1 



#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    int n;
    printf("Enter a Number :  ");
    scanf("%d", &n);

    int a = 1;

    int size = n*2-1;
    for (int i = 0; i < n-1; i++) {
        
        printf("%*s",n-i," ");
        for (int k = 1; k <= i+1; k++) {
            if(a > 9) {
                a = 1;
            }
            printf("%d ", a++);
        }
        printf("\n");
    }

    return 0;
}