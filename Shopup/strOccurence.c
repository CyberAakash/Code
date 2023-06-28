


// Write a program to find the occurrence of the pattern string in the given string, 
// such as “THIS IS A GOOD COMPANY” is the given string, 
// “IS” is the pattern string. 
// Now the number of occurrences is 2.


#include <stdio.h>
#include <string.h>

int main(){
    char str[100], pattern[20];
    int i, j, count=0, n, m;
    printf("Enter the string: ");
    fgets(str, 100, stdin);
    printf("Enter the pattern string: ");
    scanf("%s", pattern);
    n=strlen(str);
    m=strlen(pattern);
    for(i=0;i<=n-m;i++){
        for(j=0;j<m;j++){
            if(str[i+j]!=pattern[j])
                break;
        }
        if(j==m)
            count++;
    }
    printf("The number of occurrences of the pattern string is %d.", count);
    return 0;
}
