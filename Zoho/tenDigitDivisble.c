// #include <stdio.h>
// #include <stdbool.h>

// bool isDivisibleByN(int num, int n) {
//     return (num % n == 0);
// }

// void swapDigits(int* a, int* b) {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// bool checkNumber(int* digits, int n) {
//     int number = 0;
//     int factor = 1;

//     for (int i = 0; i < n; i++) {
//         number += digits[i] * factor;
//         factor *= 10;

//         if ((i + 1) != 10 && !isDivisibleByN(number, i + 1)) {
//             return false;
//         }
//     }

//     return true;
// }

// void generateValidNumber(int* digits, int n, int* validNumberFound) {
//     if (n == 10) {
//         if (checkNumber(digits, n)) {
//             *validNumberFound = 1;
//             return;
//         }
//     }

//     for (int i = n; i < 10; i++) {
//         swapDigits(&digits[n], &digits[i]);
//         generateValidNumber(digits, n + 1, validNumberFound);
//         swapDigits(&digits[n], &digits[i]);
//     }
// }

// int main() {
//     int digits[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//     int validNumberFound = 0;

//     generateValidNumber(digits, 0, &validNumberFound);

//     if (validNumberFound) {
//         printf("Generated 10-digit number: ");
//         for (int i = 0; i < 10; i++) {
//             printf("%d", digits[i]);
//         }
//         printf("\n");
//     } else {
//         printf("Error: Unable to generate a valid number.\n");
//     }

//     return 0;
// }


#include <stdio.h>

int main(void)
{
  long i,j,n,c=0;
  for (i=1000000080; i<=9999999990; i+=90) {
    for (n=i,j=10; j>1; n/=10,j--) if (n%j) break;
    if (j==1) {
      c++;
      printf("%ld ",i);
    }
  }
  printf("\nTotal: %ld\n",c);
  return 0;
}