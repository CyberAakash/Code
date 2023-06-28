// Find whether the give number is cool or not. The number is cool if sum of any digits is equal to sum of other digits.
// Eg:
//  23650-> 2+6=3+5+0 so the number is cool.
// 157->not cool number.





#include <stdio.h>

int main(){
    int num, digit, sum1=0, sum2=0;
    printf("Enter the number: ");
    scanf("%d", &num);
    while(num>0){
        digit=num%10;
        if(digit%2==0)
            sum1+=digit;
        else
            sum2+=digit;
        num/=10;
    }
    if(sum1==sum2)
        printf("The number is cool.");
    else
        printf("The number is not cool.");
    return 0;
}

