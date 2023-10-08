// You are given two strings order and s. All the characters of order are unique and were sorted in some custom order previously.

// Permute the characters of s so that they match the order that order was sorted. More specifically, if a character x occurs before a character y in order, then x should occur before y in the permuted string.

// Return any permutation of s that satisfies this property.

 

// Example 1:

// Input: order = "cba", s = "abcd"
// Output: "cbad"
// Explanation: 
// "a", "b", "c" appear in order, so the order of "a", "b", "c" should be "c", "b", and "a". 
// Since "d" does not appear in order, it can be at any position in the returned string. "dcba", "cdba", "cbda" are also valid outputs.
// Example 2:

// Input: order = "cbafg", s = "abcd"
// Output: "cbad"








#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char * customSortString(char * order, char * s){
    int len = strlen(order);
    int slen = strlen(s);
    int arr[len+1];
    for(int i = 0; i < len+1; i++) {
        arr[i] = 0;
    }
    for(int i = 0; s[i] != '\0'; i++) {
        for(int j = 0; j < len; j++) {
            if(s[i] == order[j] && arr[j] != 1) {
                arr[j] = 1;
                s[i] = '_';
            } 
        }
    }
    char *res = (char*)malloc(slen*100);
    int point = 0;
    for(int i = 0; i < len+1; i++) {
        if(arr[i] != 0) {
            res[point++] = order[i];
            for(int j = 0; j < slen; j++) {
                if(order[i] == s[j]) {
                    res[point++] = order[i];
                    s[j] = '_';
                }
            }
        }
    }
    for(int i = 0; i < slen; i++) {
        if(s[i] != '_') {
            res[point++] = s[i];
        }
    }
    res[point] = '\0';
    return res;

}


