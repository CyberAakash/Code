#include<stdio.h>
#include<stdlib.h>
int main() {
    char name[15];
    // Taking a name as an input.
    // name can only include alphabets
    scanf("%[a-zA-Z]",name);
    printf("%s",name);
    return 0;
}
