//Check whether a given number is prime or not  

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isPrime(int n) {

    if(n < 1) {
        return 0;
    }

    for(int i = 2; i*i < n; i++) {
        if(n % i == 0) {
            return 0;
        }
    }

    return 1;
}


int main() {

    int n;
    printf("Enter a number :  ");
    scanf("%d", &n);

    if(isPrime(n)) {
        printf("\nThe number is prime");
    } else {
        printf("\nThe number is not prime");
    }

    return 0;
}