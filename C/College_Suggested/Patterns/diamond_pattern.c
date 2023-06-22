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
    for (int i = n-1; i >= 0; i--) {
        
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




















// #include <stdio.h>
// #include <stdlib.h>

// void printPattern(int n) {
//     int size = 2 * n - 1;
//     int start = n, end = n;
//     int i, j;

//     for (i = 1; i <= size; i++) {
//         for (j = 1; j <= size; j++) {
//             if (j >= start && j <= end) {
//                 printf("%3d ", abs(n - j) + 1);
//             } else {
//                 printf("    ");
//             }
//         }
//         printf("\n");

//         if (i < n) {
//             start--;
//             end++;
//         } else {
//             start++;
//             end--;
//         }
//     }
// }

// int main() {
//     int n = 4;

//     printPattern(n);

//     return 0;
// }
