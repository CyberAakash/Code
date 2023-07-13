// Input: rhdt:246, ghftd:1246 
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

// // void rotateLeft2(char* start, char* end, int l) {

// // }

// // void rotateRight1(char* start, char* end, int l) {

// // }

// int splitColon(int start,int end, char* c) {
//     int i;
//     for(i = start; i <= end; i++) {
//         if(c[i] == ':') {
//             break;
//         }
//     }
//     return i;
// }

// int main() {
//     char str[MAX];\
//     printf("Enter the  String :  ");
//     fgets(str, sizeof(str), stdin);
//     printf("\nThe given String is : %s", str);
//     int len = strlen(str)-1 ; // to remove newline character from end
//     printf("\nLength of string : %d", len);

//     int start = 0,end;
//     int i;

//     for(i = 0; i <= len; i++) {
//         if(str[i] == '\0' || str[i] == ',') {
//             end = i-1;
//             int x = splitColon(start, end, str);
//             printf("Colon : %d", x);
//             int sum = 0;
//             for(int j = x+1; j <= end; j++) {
//                 sum += (str[j] - '0')*(str[j] - '0');
//             }
//             if(sum % 2 == 0) {
//                 printf("\nRightShift");
//             } else {
//                 printf("\nLeftShift");
//             }

//             start = i+1;
//         }
//     }
        



//     return 0;
// }



#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 100

void rotateLeft2(char* sub_str) {
    int l = strlen(sub_str);
    char out[l];
    char temp1 = sub_str[0];
    char temp2 = sub_str[1];
    for (int i = 0; i < l - 2; i++) {
        out[i] = sub_str[i + 2];
    }
    out[-1] = temp1;
    out[0] = temp2;

    printf("\n%s ",out);
}

void rotateRight1(char* sub_str) {
    int l = strlen(sub_str);
    char out[l];
    char temp = sub_str[0];
    for (int i = l - 1; i > 0; i--) {
        out[i] = sub_str[i - 1];
    }
    out[0] = temp;

    printf("\n%s ",out);
}

int splitColon(int end, char* c) {
    int i;
    for(i = 0; i <= end; i++) {
        if(c[i] == ':') {
            break;
        }
    }
    return i;
}

int main() {
    char str[MAX];
    printf("Enter the String: ");
    fgets(str, sizeof(str), stdin);
    printf("\nThe given String is: %s", str);
    int len = strlen(str) - 1; // to remove newline character from end
    printf("\nLength of string: %d", len);

    char* token = strtok(str, ",");
    while(token != NULL) {
        int l = strlen(token);
        printf("\n%s", token);
        char* sub_token = strtok(token, ":");
        int cnt = 1;
        char sub_str[l];
        while(sub_token != NULL) {
            int sub_len = strlen(sub_token);
            int sum = 0;
            if(cnt == 1) {
                strcpy(sub_str,sub_token);
                cnt++;
            } else {
                for(int i = 0; i < sub_len; i++) {
                    sum += (sub_token[i] - '0')*(sub_token[i] - '0');
                }
            }
            if(sum % 2 == 0 && sum != 0) {
                printf("\nRightShift");
                rotateRight1(sub_str);
            } else if(sum % 2 != 0 && sum != 0) {
                printf("\nLeftShift");
                rotateRight1(sub_str);
            }

            sub_token = strtok(NULL, ",");
        }

        token = strtok(NULL, ",");
    }

    
    return 0;
}
