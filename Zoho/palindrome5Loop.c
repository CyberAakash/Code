#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int findReverse(int n) {
    int temp = n;
    int res = 0 ;
    if(temp > 0) {
        int rem = temp % 10;
        int res = res*10 + rem;
        temp /= 10;
    }
    return res;
}

int main() {

    int n;
    scanf("%d",&n);
    int rev = findReverse(n);
    int n_v1 += rev;
    int rev_v1 = findReverse(n_v1);
    int cnt = 0;
    int flag = 0;

    while(flag != 1) {

    if(rev_v1 != n_v1 && cnt <5 ) {
        cnt++;
        n_v1 += rev_v1;
        rev_v1 = findReverse(n_v1);
    } else {
        flag = 1;
    }
    }

    if(flag == 1) {
        printf("valid");
    } else{
        printf("invalid");
    }

    return 0;
}