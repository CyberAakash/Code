// Given a line of sentence, reverse the sentence. (White spaces and special characters retain 
// their same place)
//  Example : John : oh God ! I cannot believe !
//  Evei : le Bto ! N nacIdo Ghonhoj !


// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>

// int main() {

//     char str[] = {"John : oh God ! I cannot believe !"};

//     int len = strlen(str);
//     // printf("%d\n", len);
//     char stack[] = "";

//     int j = 0;
//     for(int i = len-1; i >= 0; i--) {
//         if(str[i] == '!' || str[i] == ' ' || str[i] == ':') {
//             continue; 
//         } else {
//             stack[j++] = str[i]; 
//         }
//     }
//     stack[j] = '\0';

//     printf("%s", stack);

//     int k = 0;
//     for(int i = 0; i < len; i++) {
//         if(str[i] == '!' || str[i] == ' ' || str[i] == ':') {
//             continue;
//         } else {
//             str[i] = stack[k++];
//         }
//     }

//     printf("Changed String : %s", str);

    

//     return 0;
// }


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <ctype.h>

int main() {
    char str[] = "John : oh God ! I cannot believe !";
    int len = strlen(str);
    char stack[len + 1];  // Add +1 to accommodate the null character

    int j = 0;
    for(int i = len - 1; i >= 0; i--) {
        if(str[i] == '!' || str[i] == ' ' || str[i] == ':') {
            continue;
        } else {
            stack[j++] = str[i];
        }
    }
    stack[j] = '\0';

    printf("Reversed String: %s\n", stack);

    int k = 0;
    for(int i = 0; i < len; i++) {
        if(str[i] == '!' || str[i] == ' ' || str[i] == ':') {
            continue;
        } else {
            if(isupper(str[i])) {
                stack[k] = toupper(stack[k]);
            }
            str[i] = stack[k++];
        }
    }

    printf("Changed String: %s\n", str);

    return 0;
}
