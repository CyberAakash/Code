// Input: rhdt:246,ghftd:1246 
// Output: trhd, ftdgh 
// Explanation: 
// Here, every string (rhdt : 1246) is associated with a number, separated by semicolon, if sum of 
// square of digit is even the rotate the string right by 1 position. If square of digit is odd the rotate 
// the string left by 2 position. 
// For first case: 
// 2*2+4*4+6*6=84 which is even so rotate string, rotate right by 1 so ”rhdt” will be “trhd” 
// For second case: 
// 1*1+2*2+4*4+6*6=85 which is odd so rotate string left by 2 so “ghftd” will be “ftdgh”



// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// #define MAX 100

// void rotateLeft2(char* token, int l) {
//     char out[l+1];
//     char temp1 = token[0];
//     char temp2 = token[1];
//     int i;
//     for (i = 0; i < l - 2; i++) {
//         out[i] = token[i + 2];
//     }
//     out[i++] = temp1;
//     out[i++] = temp2;
//     out[i]='\0';
//     printf("%s ",out);
// }

// void rotateRight1(char* token, int l) {
//     char out[l+1];
//     char temp = token[l-1];
//     for (int i = l - 1; i > 0; i--) {
//         out[i] = token[i - 1];
//     }
//     out[0] = temp;
//     out[l]='\0';
//     printf("%s ",out);
// }

// int splitColon(int end, char* c) {
//     int i;
//     for(i = 0; i <= end; i++) {
//         if(c[i] == ':') {
//             break;
//         }
//     }
//     return i;
// }

// int main() {
//     char str[MAX];
//     printf("Enter the String: ");
//     fgets(str, sizeof(str), stdin);
//     printf("\nThe given String is: %s", str);
//     int len = strlen(str) - 1; // to remove newline character from end
//     // printf("\nLength of string: %d", len);

//     char* token = strtok(str, ",");
//     while(token != NULL) {
//         int l = strlen(token);
//         printf("\nString : %s , Length: %d\n", token, l);
//         // char* sub_token = strtok(token, ":");
//         int index = splitColon(l, token);
//         printf("\nColon Index :  %d\n", index);
//         int sum = 0;
//         for(int i = index+1; i < l; i++) {
//             sum += (token[i] - '0')*(token[i] - '0');
//         }
//         if(sum % 2 == 0 && sum != 0) {
//             printf("\nRightShift :  ");
//             rotateRight1(token, index);
//         } else if(sum % 2 != 0 && sum != 0) {
//             printf("\nLeftShift :  ");
//             rotateLeft2(token, index);
//         }

//         token = strtok(NULL, ",");
//     }

    
//     return 0;
// }


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 100

void rotateLeft2(const char* token, size_t l) {
    char temp1 = token[0];
    char temp2 = token[1];
    for (size_t i = 0; i < l - 2; i++) {
        ((char*)token)[i] = ((char*)token)[i + 2];
    }
    ((char*)token)[l - 2] = temp1;
    ((char*)token)[l - 1] = temp2;
    printf("%s ", token);
}

void rotateRight1(const char* token, size_t l) {
    char temp = ((char*)token)[l - 1];
    for (int i = l - 1; i > 0; i--) {
        ((char*)token)[i] = ((char*)token)[i - 1];
    }
    ((char*)token)[0] = temp;
    printf("%s ", token);
}

int splitColon(size_t l, const char* c) {
    for (size_t i = 0; i < l; i++) {
        if (c[i] == ':') {
            return i;
        }
    }
    return -1;
}

int main() {
    char str[MAX];
    printf("Enter the String: ");
    fgets(str, sizeof(str), stdin);
    printf("\nThe given String is: %s", str);
    size_t len = strlen(str) - 1; // to remove newline character from end

    char* token = strtok(str, ",");
    while (token != NULL) {
        size_t l = strlen(token);
        printf("\nString : %s , Length: %zu\n", token, l);

        int index = splitColon(l, token);
        printf("\nColon Index : %d\n", index);

        int sum = 0;
        for (size_t i = index + 1; i < l; i++) {
            sum += (token[i] - '0') * (token[i] - '0');
        }

        if (sum % 2 == 0 && sum != 0) {
            printf("\nRightShift : ");
            rotateRight1(token, index);
        } else if (sum % 2 != 0 && sum != 0) {
            printf("\nLeftShift : ");
            rotateLeft2(token, index);
        }

        token = strtok(NULL, ",");
    }

    return 0;
}


// Sample Input
// rhdt:246,ghftd:1246
