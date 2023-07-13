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


// void rotateLeft2(char* start, char* end, int l) {
//     char out[l+1];
//     out[0] = *end;
//     int j = 1;
//     for(int i = 1; i < l-1; i++) {
//         out[j++] = *start++;
//     }
//     out[j] = '\0';

//     printf("Output : %s", out);
// }


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 100

char str[MAX];

void rotateRight1(char* start, char* end, int l) {
    char out[l+1];
    out[0] = *end;
    int j = 1;
    for(int i = 1; i < l-1; i++) {
        out[j++] = *start++;
    }
    out[j] = '\0';

    printf("Output : %s", out);
}



void split(int start,int end) {
    int s, e;
    int i = start; 
    while(str[i] == ':') {
        s = i;
        e = i -1;
        int l = e - s + 1;
        int sum = 0;
        for(int j = i+1; j <= end; j++) {
            sum += str[i] - '0';
        }
        if(sum % 2 == 0) {
            rotateRight1(&str[s], &str[e], l);
        } 
        // else {
        //     rotateLeft2(&str[s], &str[e], l);
        // }
        i++;
    }
}


int main() {

    printf("Enter the  String :  ");
    fgets(str, sizeof(str), stdin);
    printf("\nThe given String is : %s", str);
    int len = strlen(str)-1 ; // to remove newline character from end
    printf("\nLength of string : %d", len);

    int i = 0, j = 0;
    while(str[i] != '\0') {

        int start, end;
        if(str[i] == ',') {
            start = j;
            end = i-1;
            j = i+1;
            split(start,end);
        }

        i++;
    }



    return 0;
}