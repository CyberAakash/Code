//input 3 13 15
//output 3

//input 3 7 10
//output 4



#include <stdio.h>
#include <stdlib.h>

int main() {

    int N,X,Y;

    printf("Enter N, X, Y : ");
    scanf("%d %d %d", &N, &X, &Y);
    printf("%d\n", (Y*(N-2)) - (X*(N-2)) + 1);
    return 0;
}