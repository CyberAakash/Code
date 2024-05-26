#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    char str[100];
    printf("Enter String :  ");
    scanf("%[^\n]s", str);
    int l = strlen(str);
    printf("\n");
    printf("\n%d", l);
    char stack[l];
    int top = -1;
    int flag = 0;

    for(int i = 0; i < l; i++) {
        if(str[i] == '(' || str[i] == '{' || str[i] == '[') {
            stack[++top] = str[i];
        } else if(str[i] == ')' || str[i] == '}' || str[i] == ']') {
            if(top == -1) {            
                flag = 0;
            }
            else if((str[i] == ')' && stack[top] == '(') || (str[i] == '}' && stack[top] =='{') || (str[i] == ']' && stack[top] == '[')){
                top--;
            } else {
                flag = 0;
            }
        }
    }

    if(top == -1) {
                flag = 1;
    }

    if(flag == 1) {
        printf("\nValid");
    } else {
        printf("\nNot Valid");
    }
    
    return 0;

}